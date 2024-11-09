#include "SoPhuc.h"
#include<iostream>
using namespace std;
SoPhuc::SoPhuc():dThuc(0),dAo(0){}
SoPhuc::SoPhuc(double thuc, double ao):dThuc(thuc),dAo(ao){}
SoPhuc::SoPhuc(int thuc, int ao) :dThuc(thuc), dAo(ao) {}
SoPhuc::SoPhuc(double thuc) :dThuc(thuc),dAo(0){}

SoPhuc SoPhuc::operator - (const SoPhuc& a){
	SoPhuc res;
	res.dThuc = dThuc - a.dThuc;
	res.dAo = dAo - a.dAo;
	return res;
}
SoPhuc SoPhuc::operator + (const SoPhuc& a){
	SoPhuc res; 
	res.dThuc = a.dThuc + dThuc;
	res.dAo = a.dAo + dAo;
	return res;
}
SoPhuc SoPhuc::operator * (const SoPhuc& a){
	SoPhuc res;
	res.dThuc = a.dThuc*dThuc - a.dAo*dAo;
	res.dAo = dThuc*a.dAo + dAo*a.dThuc;
	return res;
}
SoPhuc SoPhuc::operator / (const SoPhuc& a)
{
	SoPhuc res;
	res.dThuc = (dThuc * a.dThuc + dAo * a.dAo)/(a.dThuc*a.dThuc + a.dAo*a.dAo);
	res.dAo = (dAo * a.dThuc - dThuc * a.dAo) / (a.dThuc * a.dThuc + a.dAo * a.dAo);
	return res;
}
bool SoPhuc::operator==(const SoPhuc& a)
{
	return a.dThuc*a.dThuc + a.dAo*a.dAo == dThuc * dThuc + dAo * dAo;
}
bool SoPhuc::operator != (const SoPhuc& a){
	return a.dThuc * a.dThuc + a.dAo * a.dAo != dThuc * dThuc + dAo * dAo;
}
bool SoPhuc::operator > (const SoPhuc& a){
	return a.dThuc * a.dThuc + a.dAo * a.dAo > dThuc * dThuc + dAo * dAo;
}
bool SoPhuc::operator < (const SoPhuc& a)
{
	return a.dThuc * a.dThuc + a.dAo * a.dAo > dThuc * dThuc + dAo * dAo;
}
bool SoPhuc::operator <= (const SoPhuc& a)
{
	return a.dThuc * a.dThuc + a.dAo * a.dAo <= dThuc * dThuc + dAo * dAo;
}
bool SoPhuc::operator >= (const SoPhuc& a){
	return a.dThuc * a.dThuc + a.dAo * a.dAo >= dThuc * dThuc + dAo * dAo;
}
istream& operator >> (istream& in, SoPhuc& p){
	in >> p.dThuc>>p.dAo;
	return in;
}
ostream& operator << (ostream& out, SoPhuc p){
	if (p.dAo > 0) out << p.dThuc << " + " << p.dAo << "i";
	else if (p.dAo < 0) out << p.dThuc << " - " << -p.dAo << "i";
	else out << p.dThuc;
	return out;
}