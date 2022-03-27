#pragma once
#include"Forest.h"

class TTree : public TForest
{
public:
	TTree();
	TTree(TTree& p);
	TTree(double _height, double _density);
	TTree(double w);

	TTree(TTree&& p);


	virtual void Print();

	bool GetConiferousTree();
	void SetConiferousTree(bool n);

protected:
	bool coniferousTree;

};