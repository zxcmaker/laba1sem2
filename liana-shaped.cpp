#include "liana-shaped.h"
#include <iostream>

TLianashaped::TLianashaped()
{
	height = 0;
	density = 0;
	longs = 0;
}

TLianashaped::TLianashaped(TLianashaped& p)
{
	height = p.height;
	density = p.density;
}

TLianashaped::TLianashaped(double _height, double _density, double _long)
{
	SetHeight(_height);
	SetDensity(_density);
	SetLong(_long);
}

void TLianashaped::SetLong(double _long)
{
	if (_long > 0)
		this->longs = _long;
}

double TLianashaped::GetLong()
{
	return longs;
}


void TLianashaped::Print()
{
	std::cout << "Lianashaped, height = " << this->GetHeight() <<
		"\tdensity = " << this->GetDensity() << "\tlong= " << this->GetLong() << std::endl;
}
