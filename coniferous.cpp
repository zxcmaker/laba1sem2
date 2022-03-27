#include "coniferous.h"
#include <iostream>

TCoiferous::TCoiferous()
{
	height = 0;
	density = 0;
	width = 0;
}

TCoiferous::TCoiferous(TCoiferous& p)
{
	height = p.height;
	density = p.density;
}

TCoiferous::TCoiferous(double _height, double _density, double _width)
{

	SetHeight(_height);
	SetDensity(_density);
	SetWidth(_width);
}

void TCoiferous::SetWidth(double _width)
{
	if (_width > 0)
		this->width = _width;
}

double TCoiferous::GetWidth()
{
	return width;
}

void TCoiferous::Print()
{
	std::cout << "Coiferous, height = " << this->GetHeight() <<
		"\tdensity = " << this->GetDensity() << "\twidth= " << this->GetWidth() << std::endl;
}
