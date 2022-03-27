#include "Forest.h"

TForest::TForest()
{
	height = 0;

	density = 0;

	kind_amountCount = 5;
	kind_amount = new int[kind_amountCount];
}

TForest::~TForest()
{
	height = 0;

	density = 0;

	delete [] kind_amount;
}

double TForest::GetHeight()
{
	return height;
}
double TForest::GetDensity()
{
	return density;
}

int TForest::GetKind_amountCount()
{
	return kind_amountCount;
}
int* TForest::GetKind_amount()
{
	return kind_amount;
}

void TForest::SetHeight(double _height)
{
	if (_height > 0)
		this->height = _height;
}

void TForest::SetDensity(double _density)
{
	if (_density)
		density = _density;
}

void TForest::SetKind_amountCount(int _kind_amountCount)
{
	if (_kind_amountCount > 0)
	{
		int* temp = new int[_kind_amountCount];
		for (int i = 0; i < (kind_amountCount > _kind_amountCount ? _kind_amountCount : kind_amountCount); i++)
		{
			temp[i] = kind_amount[i];
		}
		delete[] kind_amount;
		kind_amount = temp;
		kind_amountCount = _kind_amountCount;
	}
}

void TForest::SetKind_amount(int kind_amount, int i)
{
	if (i >= 0 && i < kind_amountCount)
	{
		this->kind_amount[i] = kind_amount;
	}
}


	