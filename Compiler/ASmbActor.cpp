#include "assert.h"
#include "ASmbActor.h"
#include "math.h"

ASmbActor::ASmbActor()
{
    //ctor
}

ASmbActor::~ASmbActor()
{
    //dtor
}

/////////////////////////////////////////////
ASmb *ASmbActor::Copy(const char *lxm)
{
    ASmbActor *result=new ASmbActor;
    result->lexema=lxm;
    return result->SteelData(this);
}

