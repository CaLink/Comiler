#ifndef A2TREETRANSLATOR_H
#define A2TREETRANSLATOR_H

#include "APolishTranslator.h"
#include <map>
#include <vector>

#define PREFIX_OPS "sin cos"
#define POSTFIX_OPS "++ --"

typedef std::map <std::string,ASmb *> SmbDict;
typedef std::pair<std::string,ASmb*> SmbDef;

class APolishTranslator2 : public APolishTranslator
{
public:
    APolishTranslator2();
    virtual ~APolishTranslator2();

public:
    void AddPostfixOp(const char * name,int type);
    void AddTerminatorOp(const char * name,int type);
    void AddPrefixOp(const char * name,int type);
    ASmb *FindKeyword(const char *op);

    AStack& GiveRWing();

public:
    virtual void ClearResult();
    virtual void InitTranslation();
    virtual void Output(ASmb *s);
    virtual void Parse(const char* lexema,ASmb &s);
private:
    AStack RList;
    SmbDict Keywords;
    ASmb *LastOp;
    AStack Program;

};

#endif // A2TREETRANSLATOR_H
