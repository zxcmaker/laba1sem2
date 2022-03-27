#include "vertical.h"
#include <iostream>

TVertical::TVertical()
{
	height = 0;
	density = 0;
	hardness = 0;
}

TVertical::TVertical(TVertical& p)
{
	height = p.height;
	density = p.density;
}

TVertical::TVertical(double _height, double _density, double _hardness)
{
	SetHeight(_height);
	SetDensity(_density);
	SetHardness(_hardness);
}

void TVertical::SetHardness(double _hardness)
{
	if (_hardness > 0)
		this->hardness = _hardness;
}

double TVertical::GetHardness()
{
	return hardness;
}


void TVertical::Print()
{
	std::cout << "Vertical, height = " << this->GetHeight() <<
		"\tdensity = " << this->GetDensity() << "\thardness= " << this->GetHardness() << std::endl;
}
