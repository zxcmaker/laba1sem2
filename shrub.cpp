#include "shrub.h"

#include <iostream>

TShrub::TShrub() : TForest ()
{
	verticalTree = true;
}

TShrub::TShrub(TShrub& p)
{
	height = p.height;
	density = p.density;
}

TShrub::TShrub(double _height, double _density)
{
	SetHeight(_height);
	SetDensity(_density);
}

void TShrub::Print()
{
	std::cout << "Shrub, Height = " << this->GetHeight() << 
							 "\tDensity = " << this->GetDensity() <<
	((verticalTree == true) ? "\t verticalShrub" : "\t liana-shapedShrub") << std::endl;
}

bool TShrub::GetVerticalTree()
{
	return verticalTree;
}

void TShrub::SetVerticalTree(bool n)
{
	verticalTree = n;
}
