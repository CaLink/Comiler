#include "assert.h"
#include "string.h"
#include "ASmbDigit.h"

ASmbDigit::ASmbDigit()
{
    //ctor
}

ASmbDigit::~ASmbDigit()
{
    //dtor
}
/////////////////////////////////////////////
ASmb *ASmbDigit::Copy(const char *lxm)
{
    ASmbDigit *result=new ASmbDigit;
    result->lexema=lxm;
    return result->SteelData(this);
}
/////////////////////////////////////////////

