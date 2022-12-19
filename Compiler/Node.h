#pragma once
#include <iostream>
#include "ASmb.h"


class Node 
{
public:
	Node();
	Node(ASmb*);

public:
	void Print();
	ASmb* GetData();


	void AddNode(ASmb*);
	void Show(Node*);



private:
	ASmb* data;
	
	Node* lSone=0;
	Node* rSone=0;

};


