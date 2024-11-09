#include "PhanSo.h"
#include<iostream>
using namespace std;
PhanSo::PhanSo(): iTu(0), iMau(1){}
PhanSo::PhanSo(int x) : iTu(x), iMau(1) {}
PhanSo::PhanSo(double x): iTu(x),iMau(1){}
PhanSo::PhanSo(double x, double y): iTu(x), iMau(y){}

istream& operator >> (istream& in, PhanSo& p) {
	in >> p.iTu >> p.iMau;
	while (!p.iMau)
	{
		cout << "Mau phai khac 0\n";
		cin >> p.iMau;
	}
	return in;
}
ostream& operator << (ostream& out, PhanSo p) {
	out << p.iTu;
	if (p.iMau) out <<"/" << p.iMau;
	return out;
}
PhanSo PhanSo::operator+(const PhanSo &a) {
	PhanSo result;
	result.iMau = a.iMau * iMau;
	result.iTu = a.iTu * iMau + iTu * a.iMau;
	return result;
}
PhanSo PhanSo::operator-(const PhanSo& a) {
	PhanSo result;
	result.iMau = a.iMau * iMau;
	result.iTu = a.iTu * iMau - iTu * a.iMau;
	return result;
}
PhanSo PhanSo::operator*(const PhanSo& a)
{
	PhanSo result;
	result.iTu = a.iTu * iTu;
	result.iMau = a.iMau * iMau; 
	return result;
}
PhanSo PhanSo::operator/(const PhanSo& a)
{
	PhanSo result;
	result.iMau = a.iTu * iMau;
	result.iTu = a.iMau * iTu;
	return result;
}
bool PhanSo::operator==(const PhanSo& a)
{
	return a.iTu * iMau == iTu * a.iMau;
}
bool PhanSo::operator!=(const PhanSo& a)
{
	return a.iTu * iMau != iTu * a.iMau;
}

bool PhanSo::operator>(const PhanSo& a)
{
	return a.iTu * iMau > iTu * a.iMau;
}
bool PhanSo::operator<=(const PhanSo& a)
{
	return a.iTu * iMau <= iTu * a.iMau;
}
bool PhanSo::operator>=(const PhanSo& a)
{
	return a.iTu * iMau >= iTu * a.iMau;
}
bool PhanSo::operator<(const PhanSo& a)
{
	return a.iTu * iMau < iTu * a.iMau;
}