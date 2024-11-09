#pragma once
#include<iostream>
using namespace std;
class SoPhuc
{
private:
	double dThuc, dAo;
public:
	SoPhuc();
	SoPhuc(double thuc, double ao);
	SoPhuc(int thuc, int ao);
	SoPhuc(double thuc);
	SoPhuc operator - (const SoPhuc& a) ;
	SoPhuc operator + (const SoPhuc& a) ;
	SoPhuc operator * (const SoPhuc& a) ;
	SoPhuc operator / (const SoPhuc& a) ;
	bool operator == (const SoPhuc& a) ;
	bool operator != (const SoPhuc& a) ;
	bool operator > (const SoPhuc& a) ;
	bool operator < (const SoPhuc& a) ;
	bool operator <= (const SoPhuc& a) ;
	bool operator >= (const SoPhuc& a) ;
	friend istream& operator >> (istream& in, SoPhuc& p) ;
	friend ostream& operator << (ostream& out, SoPhuc p) ;

};


