#ifndef APOLISHTRANSLATOR_H
#define APOLISHTRANSLATOR_H

#include <stdio.h>
#include <string.h>
#include "AStack.h"
#include "ASmb.h"


class APolishTranslator{
 public:
    APolishTranslator();
    ~APolishTranslator();
 public:
    void InitDigits(const char *sset,int tp); // New!
    void InitSrc(const char *sset,int tp);
    void InitOp(const char *sset);
    int LastOpType();
 public:
    virtual void ClearResult();
    virtual void InitTranslation();
    virtual void Output(ASmb *s);
    virtual void Parse(const char* lexema,ASmb &s);
 public:
    const char *Translate(const char *text);
 protected:
    char *result;
    int rpos;
    ASmb *SrcSet[256]; // New
    AStack OList;
};

#endif // APOLISHTRANSLATOR_H
