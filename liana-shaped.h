#pragma once
#include"Forest.h"
#include"shrub.h"

class TLianashaped : public TShrub
{
public:
	TLianashaped();
	TLianashaped(TLianashaped& p);
	TLianashaped(double _height, double _density, double _long);

	void SetLong(double _long);
	double GetLong();

	virtual void Print();

private:

	double longs;

};