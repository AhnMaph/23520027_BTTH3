#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
private:
	double iTu, iMau;
public:
	PhanSo();
	PhanSo(double x, double y);
	PhanSo(double x);
	PhanSo(int x);
	PhanSo operator + (const PhanSo &a);
	PhanSo operator - (const PhanSo &a);
	PhanSo operator * (const PhanSo &a);
	PhanSo operator / (const PhanSo &a);
	friend istream& operator >> (istream& in, PhanSo& p);
	friend ostream& operator << (ostream& out, PhanSo p);
	bool operator == (const PhanSo &a);
	bool operator != (const PhanSo &a);
	bool operator >= (const PhanSo &a);
	bool operator <= (const PhanSo &a);
	bool operator < (const PhanSo &a);
	bool operator > (const PhanSo &a);
};

