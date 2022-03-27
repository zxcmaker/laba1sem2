#pragma once
#include"Forest.h"
class TShrub : public TForest 
{
public:
	TShrub();
	TShrub(TShrub& p);
	TShrub(double _height, double _density);

	virtual void Print();

	bool GetVerticalTree();
	void SetVerticalTree(bool n);

protected:
	bool verticalTree;
};