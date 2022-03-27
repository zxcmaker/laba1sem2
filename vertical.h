#pragma once
#include"Forest.h"
#include"shrub.h"

class TVertical : public TShrub 
{
public:
	TVertical();
	TVertical(TVertical& p);
	TVertical(double _height, double _density, double _hardness);

	void SetHardness(double _hardness);
	double GetHardness();

	virtual void Print();

private:

	double hardness;

};