#include <math.h>
#include "APolishTranslator2.h"
#include "ASmbActor.h"
#include "ASmbTerminator.h"

APolishTranslator2::APolishTranslator2()
{
    //ctor
    AddPostfixOp("++",SPSTOP);
    AddPostfixOp("--",SPSTOP);
    AddTerminatorOp(";",SPSTOP);
    AddPrefixOp("sin",SPREOP);
    AddPrefixOp("cos",SPREOP);
    AddPrefixOp("int",SPREOP);
    AddPrefixOp("real",SPREOP);
    AddPrefixOp("print",SPREOP);
}

///////////////////////////////////////////////////////
APolishTranslator2::~APolishTranslator2()
{
    //dtor
}
///////////////////////////////////////////////////////
void APolishTranslator2::AddPostfixOp(const char * name,int type)
{
    ASmbActor *s=new ASmbActor;
    s->Init(name,type,-1);
    Keywords.insert( SmbDef(name,s) );
}
///////////////////////////////////////////////////////
void APolishTranslator2::AddTerminatorOp(const char * name,int type)
{
    ASmbActor *s=new ASmbTerminator;
    s->Init(name,type,-1);
    Keywords.insert( SmbDef(name,s) );
}
///////////////////////////////////////////////////////
void APolishTranslator2::AddPrefixOp(const char * name,int type)
{
    ASmbActor *s=new ASmbActor;
    s->Init(name,type,1);
    Keywords.insert( SmbDef(name,s) );
}
///////////////////////////////////////////////////////
ASmb *APolishTranslator2::FindKeyword(const char *op)
{
    SmbDict::iterator it;
    it=Keywords.find(op);
     if (it == Keywords.end())
        return NULL;
    return it->second;
}
AStack& APolishTranslator2::GiveRWing()
{
    return this->RList;
}
///////////////////////////////////////////////////////
void APolishTranslator2::ClearResult()
{
    ASmb *l;
    while (l=(ASmb *)RList.Pop())
        delete l;
    APolishTranslator::ClearResult();
}
///////////////////////////////////////////////////////
void APolishTranslator2::InitTranslation()
{
    APolishTranslator::InitTranslation();
    RList.Init();
}
///////////////////////////////////////////////////////
void APolishTranslator2::Output(ASmb *psmb)
{
    APolishTranslator::Output(psmb);
    RList.Push(psmb);
}
///////////////////////////////////////////////////////
void APolishTranslator2::Parse(const char* lexema,ASmb &s)
{
    ASmb *psmb=FindKeyword(lexema);
    if (!psmb) psmb=&s;
    switch(psmb->stype)
    {
        case SERR: printf("Unrecognized symbol %s\r\n",lexema);
        case SWHITE: return;
        case SPREOP:
                assert(psmb->arn==1); // prefix operation like sin
                OList.Push(psmb->Copy(lexema));
                break;
        case SPSTOP:
                assert(psmb->arn==-1); // postfix operation! like ++
                while(SPREOP==LastOpType())
                    Output((ASmb*)OList.Pop());
                if (LastOp->stype>=SEND)
                    printf("Postfix operation need argument before operation!\r\n");
                Output(psmb->Copy(lexema));
                break;
        default:
            APolishTranslator::Parse(lexema,*psmb);
    }

    LastOp=psmb;
}



