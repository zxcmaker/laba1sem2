#pragma once
#include"Forest.h"
#include"tree.h"

class TDeciduous : public TTree
{
public:
	TDeciduous();
	TDeciduous(TDeciduous& p);
	TDeciduous(double _height, double _density, double _volume);

	void SetVolume(double _width);
	double GetVolume();

	virtual void Print();

private:

	double volume;
};
