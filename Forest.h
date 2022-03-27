#pragma once
class TForest
{
public:
	TForest();
	~TForest();

	double GetHeight();

	double GetDensity();

	int GetKind_amountCount();
	int* GetKind_amount();
	
	void SetHeight(double _height);

	void SetDensity(double _);

	void SetKind_amountCount(int _kind_amountCount);
	void SetKind_amount(int _kind_amount , int i);

	virtual void Print() = 0;

protected:
	double height;

	double density;

	int kind_amountCount;
	int* kind_amount;
};