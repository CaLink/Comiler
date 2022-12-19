#include "TreeBuilder.h"

TreeBuilder::TreeBuilder()
{}

TreeBuilder::TreeBuilder(AStack Nu)
{
	Head = new Node((ASmb*)Nu.Pop());

	int lexCount = Nu.GetCount();
	for (int i = 0; i < lexCount; i++)
	{
		ASmb* pop = ((ASmb*)Nu.Pop());
		std::cout << pop->lexema << "\t" <<pop->stype<<"\t"<<pop->ResType << std::endl;
		Head->AddNode(pop);
	}
	
	
}


void TreeBuilder::Print()
{
	Head->Show(Head);
}

TreeBuilder::~TreeBuilder()
{
}
