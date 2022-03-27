#include "tree.h"
#include <iostream>

TTree::TTree() : TForest ()
{
	coniferousTree = false;
}

TTree::TTree(TTree& p)
{
	height = p.height;
	density = p.density;

	kind_amountCount = p.kind_amountCount;

	kind_amount = new int[kind_amountCount];

	p.kind_amount = 0;
	p.kind_amountCount = 0;

	for (int i = 0; i < kind_amountCount; i++)
	{
		kind_amount = p.kind_amount;
	}
}

TTree::TTree(double _height, double _density)
{
	SetHeight(_height);
	SetDensity(_density);
	coniferousTree = false;
}

TTree::TTree(double w) : TTree(w, 0)
{

}

TTree::TTree(TTree&& p)
{
	height = p.height;
	density = p.density;

	kind_amountCount = p.kind_amountCount;
	kind_amount = p.kind_amount;
}

void TTree::Print()
{
	std::cout << "Tree, Height = " << this->GetHeight() << "\t Density = " << this->GetDensity() <<
		((coniferousTree == true) ? "\t coniferousTree" : "\t deciduousTree") << std::endl;
}

bool TTree::GetConiferousTree()
{
	return coniferousTree;
}

void TTree::SetConiferousTree(bool n)
{
	coniferousTree = n;
}
