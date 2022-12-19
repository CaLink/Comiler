#ifndef ASMBOPERATOR_H
#define ASMBOPERATOR_H

#include "ASmb.h"

class ASmbOperator: public ASmb
{
public:
    ASmbOperator();
    virtual ~ASmbOperator();

public:
    virtual ASmb *Copy(const char *lxm);
};

#endif // ASMBOPERATOR_H
