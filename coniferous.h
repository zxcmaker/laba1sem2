#pragma once
#include"Forest.h"
#include"tree.h"

class TCoiferous : public TTree
{
public:
	TCoiferous();
	TCoiferous(TCoiferous& p);
	TCoiferous(double _height, double _density, double _width);

	void SetWidth(double _width);
	double GetWidth();

	virtual void Print();

private:

	double width;

};