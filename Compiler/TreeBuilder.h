#pragma once

#include "Node.h"
#include "AStack.h"
#include "ASmb.h"

class TreeBuilder
{
public:
    TreeBuilder();
    TreeBuilder(AStack Nu);
    virtual ~TreeBuilder();
    void Print();

private:

    Node* Head;
    
};
