#include "deciduous.h"
#include <iostream>

TDeciduous::TDeciduous()
{
	height = 0;
	density = 0;
	volume = 0;
}

TDeciduous::TDeciduous(TDeciduous& p)
{
	height = p.height;
	density = p.density;
}

TDeciduous::TDeciduous(double _height, double _density, double _volume)
{
	SetHeight(_height);
	SetDensity(_density);
	SetVolume(_volume);
}

void TDeciduous::SetVolume(double _volume)
{
	if (_volume > 0)
		this->volume = _volume;
}

double TDeciduous::GetVolume()
{
	return volume;
}

void TDeciduous::Print()
{
	std::cout << "Deciduous, height = " << this->GetHeight() <<
		"\tdensity = " << this->GetDensity() << "\tvolume= " << this->GetVolume() << std::endl;
}
