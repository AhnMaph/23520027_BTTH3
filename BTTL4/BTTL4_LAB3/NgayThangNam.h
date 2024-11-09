#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
using namespace std;
#include <iostream>

class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;
    bool NamNhuan(int nam) const;
    int SoNgayTrongThang(int thang, int nam) const;
public:
    NgayThangNam();
    NgayThangNam(int nam, int thang, int ngay);

    int TinhNgay() const;

    NgayThangNam operator+(int ngay) const;
    NgayThangNam operator-(int ngay) const;
    NgayThangNam operator-(const NgayThangNam& a) const;

    NgayThangNam operator++(int);
    NgayThangNam operator--(int);

    bool operator==(const NgayThangNam& a) const;
    bool operator!=(const NgayThangNam& a) const;
    bool operator>(const NgayThangNam& a) const;
    bool operator<(const NgayThangNam& a) const;
    bool operator>=(const NgayThangNam& a) const;
    bool operator<=(const NgayThangNam& a) const;

    friend istream& operator>>(istream& in, NgayThangNam& p);
    friend ostream& operator<<(ostream& out, const NgayThangNam& p);
};

#endif
