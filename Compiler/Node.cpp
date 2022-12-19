#include "Node.h"


Node::Node()
{}

Node::Node(ASmb* data)
{
	this->data = data;
}

void Node::Print()
{
	std::cout << this->data->lexema << "\n";
}

void Node::AddNode(ASmb* data)
{

	if ( this->data->stype < data->stype)
		if (rSone)
			rSone->AddNode(data);
		else
			this->rSone = new Node(data);
	else
		if (lSone)
			lSone->AddNode(data);
		else
			this->lSone = new Node(data);

}

ASmb* Node::GetData()
{
	return this->data;
}

void Node::Show(Node* root)
{
	if (!root)
		return;

	Show(root->lSone);
	root->Print();
	Show(root->rSone);


}
