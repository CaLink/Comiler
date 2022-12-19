#ifndef ASMBTERMINATOR_H
#define ASMBTERMINATOR_H

#include "ASmbActor.h"

class ASmbTerminator : public ASmbActor
{
public:
    ASmbTerminator();
    virtual ~ASmbTerminator();

public:
    virtual ASmb *Copy(const char *lxm);
};

#endif // ASMBTERMINATOR_H
