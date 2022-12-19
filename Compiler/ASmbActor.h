#ifndef ASMBACTOR_H
#define ASMBACTOR_H

#include "ASmb.h"

class ASmbActor : public ASmb
{
public:
    ASmbActor();
    virtual ~ASmbActor();

public:
    virtual ASmb *Copy(const char *lxm);
};

#endif // ASMBACTOR_H
