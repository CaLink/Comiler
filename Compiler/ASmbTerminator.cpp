#include "assert.h"
#include "ASmbTerminator.h"

ASmbTerminator::ASmbTerminator()
{
    //ctor
}

ASmbTerminator::~ASmbTerminator()
{
    //dtor
}


/////////////////////////////////////////////
ASmb *ASmbTerminator::Copy(const char *lxm)
{
    ASmbTerminator *result=new ASmbTerminator;
    result->lexema=lxm;
    return result->SteelData(this);
}
/////////////////////////////////////////////

