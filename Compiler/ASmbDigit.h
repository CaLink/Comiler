#ifndef ASMBDIGIT_H
#define ASMBDIGIT_H
#include "ASmb.h"


class ASmbDigit : public ASmb
{
public:
    ASmbDigit();
    virtual ~ASmbDigit();
public:
    virtual ASmb *Copy(const char *lxm);
};

#endif // ASMBDIGIT_H
