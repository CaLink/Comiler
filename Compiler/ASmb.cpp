#include <string.h>
#include <assert.h>
#include "math.h"
#include "ASmb.h"
#include "AStack.h"

/////////////////////////////////////////////
ASmb::ASmb()
{
    stype=SERR;
    arn=-1;
    x1=NULL;
    x2=NULL;
    ResType=0;
}
/////////////////////////////////////////////
ASmb::~ASmb()
{
    //dtor
}
/////////////////////////////////////////////
void ASmb::Init(char c,int type,int a)
{
    char x[2]={c,0};
    lexema=x;
    stype=type;
    arn=a;
}
/////////////////////////////////////////////
void ASmb::Init(const char *s,int type,int a)
{
    lexema=s;
    stype=type;
    arn=a;
}
/////////////////////////////////////////////
ASmb *ASmb::Copy(const char *lxm)
{
    ASmb *result=new ASmb;
    result->lexema=lxm;
    return result->SteelData(this);
}
/////////////////////////////////////////////
ASmb *ASmb::SteelData(ASmb *that)
{
    this->stype=that->stype;
    this->arn==that->arn;
    this->x1=that->x1;
    this->x2=that->x2;
    this->ResType=that->ResType;
    return this;
}


