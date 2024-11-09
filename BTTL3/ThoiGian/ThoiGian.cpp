#include "ThoiGian.h"
void ThoiGian::TinhLaiGio(int giay)
{
	ThoiGian res;
	iGio = int(giay / 3600);
	giay = giay % 3600;
	iPhut = giay / 60;
	giay = giay % 60;
	iGiay = giay;
}
ThoiGian::ThoiGian():iGio(0),iPhut(0),iGiay(0){}
ThoiGian::ThoiGian(int h,int m, int s) :iGio(h), iPhut(m), iGiay(s){}
ThoiGian::ThoiGian(int giay) {
	iGio = int(giay / 3600);
	giay = giay % 3600;
	iPhut = giay / 60;
	giay = giay % 60;
	iGiay = giay;
}
int ThoiGian::TinhGiay()const
{
	int tong = iGio * 60 * 60 + iPhut * 60 + iGiay;
	return tong;
}
ThoiGian ThoiGian::operator+(const ThoiGian& a)
{
	ThoiGian res;
	res.iGiay = (iGiay + a.iGiay);
	res.iPhut = (res.iGiay/60 + iPhut + a.iPhut);
	res.iGio = (res.iPhut / 60 + iGio + a.iGio);
	res.iPhut %= 60;
	res.iGiay %= 60;
	return res;
}
ThoiGian ThoiGian::operator-(const ThoiGian& a)
{
	ThoiGian res;
	res.iGio = (iGio - a.iGio);
	
	res.iPhut = iPhut-a.iPhut;
	if (res.iPhut < 0 && res.iGio>0) {
		res.iGio -= 1;
		res.iPhut += 60;
	}
	res.iGiay = iGiay - a.iGiay;
	if (res.iGiay < 0 && res.iPhut>0) {
		res.iPhut -= 1;
		res.iGiay += 60;
	}
	else if (res.iGiay < 0 &&res.iPhut==0&& res.iGio>0)
	{
		res.iGio -= 1;
		res.iPhut = 59;
		res.iGiay += 60;
	}
	return res;
}
ThoiGian ThoiGian::operator++(int a)
{
	ThoiGian res;
	res.iGiay = (iGiay + 1);
	res.iPhut = (res.iGiay / 60 + iPhut);
	res.iGio = (res.iPhut / 60 + iGio);
	res.iPhut %= 60;
	res.iGiay %= 60;
	return res;
}
ThoiGian ThoiGian::operator--(int a)
{
	ThoiGian res;
	res.iGio = iGio;
	res.iPhut = iPhut;
	res.iGiay = iGiay - 1;
	if (res.iGiay < 0 && res.iPhut>0) {
		res.iPhut -= 1;
		res.iGiay += 60;
	}
	else if (res.iGiay < 0 && res.iPhut == 0 && res.iGio>0)
	{
		res.iGio -= 1;
		res.iPhut = 59;
		res.iGiay += 60;
	}
	return res;
}
bool ThoiGian::operator==(const ThoiGian& a)
{
	return iGio == a.iGio && iPhut == a.iPhut && iGiay == a.iGiay;
}
bool ThoiGian::operator!=(const ThoiGian& a)
{
	return !(iGio == a.iGio && iPhut == a.iPhut && iGiay == a.iGiay);
}
bool ThoiGian::operator>(const ThoiGian& a) {
	return TinhGiay() > a.TinhGiay();
}
bool ThoiGian::operator<(const ThoiGian& a) {
	return TinhGiay() < a.TinhGiay();
}
bool ThoiGian::operator>=(const ThoiGian& a) {
	return TinhGiay() >= a.TinhGiay();
}
bool ThoiGian::operator<=(const ThoiGian& a) {
	return TinhGiay() <= a.TinhGiay();
}
istream& operator >> (istream& in, ThoiGian& p)
{
	do
	{
		in >> p.iGio >> p.iPhut >> p.iGiay;
	} while (p.iGio < 0 || p.iPhut < 0 || p.iGiay < 0);
	return in;
}
ostream& operator << (ostream& out, ThoiGian p)
{
	out<< p.iGio <<" gio " << p.iPhut<<" phut " << p.iGiay<<" giay ";
	return out;
}