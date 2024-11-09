#pragma once
#include<iostream>
using namespace std;
class ThoiGian
{
private:
	int iGio, iPhut, iGiay;
public:
	ThoiGian();
	ThoiGian(int gio, int phut, int giay);
	ThoiGian(int giay);
	int TinhGiay() const;
	void TinhLaiGio(int Giay);
	ThoiGian operator + (const ThoiGian& a);
	ThoiGian operator - (const ThoiGian& a);
	friend istream& operator >> (istream& in, ThoiGian& p);
	friend ostream& operator << (ostream& out, ThoiGian p);
	bool operator == (const ThoiGian& a);
	bool operator != (const ThoiGian& a);
	bool operator >= (const ThoiGian& a);
	bool operator <= (const ThoiGian& a);
	bool operator < (const ThoiGian& a);
	bool operator > (const ThoiGian& a);
	ThoiGian operator ++(int);
	ThoiGian operator --(int);
};

