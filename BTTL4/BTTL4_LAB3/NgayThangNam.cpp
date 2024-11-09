#include "NgayThangNam.h"
using namespace std;
NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(1) {}

NgayThangNam::NgayThangNam(int nam, int thang, int ngay) : iNgay(ngay), iThang(thang), iNam(nam) {}

bool NgayThangNam::NamNhuan(int nam) const {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int NgayThangNam::SoNgayTrongThang(int thang, int nam) const {
    switch (thang) {
    case 4: case 6: case 9: case 11: return 30;
    case 2: return NamNhuan(nam) ? 29 : 28;
    default: return 31;
    }
}

int NgayThangNam::TinhNgay() const {
    int tong = iNgay;
    for (int thang = 1; thang < iThang; ++thang)
        tong += SoNgayTrongThang(thang, iNam);

    return tong;
}

NgayThangNam NgayThangNam::operator+(int ngay) const {
    NgayThangNam temp = *this;
    temp.iNgay += ngay;

    while (temp.iNgay > SoNgayTrongThang(temp.iThang, temp.iNam)) {
        temp.iNgay -= SoNgayTrongThang(temp.iThang, temp.iNam);
        if (++temp.iThang > 12) {
            temp.iThang = 1;
            ++temp.iNam;
        }
    }

    return temp;
}

NgayThangNam NgayThangNam::operator-(int ngay) const {
    NgayThangNam temp = *this;
    temp.iNgay -= ngay;

    while (temp.iNgay <= 0) {
        if (--temp.iThang < 1) {
            temp.iThang = 12;
            temp.iNam--;
        }
        temp.iNgay += SoNgayTrongThang(temp.iThang, temp.iNam);
    }

    return temp;
}

NgayThangNam NgayThangNam::operator-(const NgayThangNam& a) const {
    int chenhLechNgay = TinhNgay() - a.TinhNgay();
    return NgayThangNam(0, 0, chenhLechNgay);
}

NgayThangNam NgayThangNam::operator++(int) {
    *this = *this + 1;
    return *this;
}

NgayThangNam NgayThangNam::operator--(int) {
    *this = *this - 1;
    return *this;
}

bool NgayThangNam::operator==(const NgayThangNam& a) const {
    return iNgay == a.iNgay && iThang == a.iThang && iNam == a.iNam;
}

bool NgayThangNam::operator!=(const NgayThangNam& a) const {
    return !(*this == a);
}

bool NgayThangNam::operator>(const NgayThangNam& a) const {
    return TinhNgay() > a.TinhNgay();
}

bool NgayThangNam::operator<(const NgayThangNam& a) const {
    return TinhNgay() < a.TinhNgay();
}

bool NgayThangNam::operator>=(const NgayThangNam& a) const {
    return TinhNgay() >= a.TinhNgay();
}

bool NgayThangNam::operator<=(const NgayThangNam& a) const {
    return TinhNgay() <= a.TinhNgay();
}

istream& operator>>(istream& in, NgayThangNam& p) {
    do in >> p.iNgay >> p.iThang >> p.iNam;
    while(!(p.iNam>0&&
        p.iThang>0&&p.iThang<=12&&
        p.iNgay>0&&p.iNgay<=p.SoNgayTrongThang(p.iThang,p.iNam)));
    return in;
}

ostream& operator<<(ostream& out, const NgayThangNam& p) {
    out << p.iNgay << "/" << p.iThang << "/" << p.iNam;
    return out;
}