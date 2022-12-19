#include "assert.h"
#include "ASmbOperator.h"
#include "math.h"

#define max(a,b)  (a)>(b)?(a):(b)

ASmbOperator::ASmbOperator()
{
    //ctor
}

ASmbOperator::~ASmbOperator()
{
    //dtor
}
/////////////////////////////////////////////
ASmb *ASmbOperator::Copy(const char *lxm)
{
   ASmbOperator *result=new ASmbOperator;
   result->lexema=lxm;
   return result->SteelData(this);
}

