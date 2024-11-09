#include <iostream>
#include "NgayThangNam.h"
using namespace std;
int main() {
    NgayThangNam ngay1;
    NgayThangNam ngay2;
    NgayThangNam ngay3(2023, 2, 28);
    cout << "Nhap ngay2 (ngay thang nam): ";
    cin >> ngay2;
    cout << "Ngay 1: " << ngay1 << '\n';
    cout << "Ngay 2: " << ngay2 << '\n';
    cout << "Ngay 3: " << ngay3 << '\n';

    NgayThangNam ngay4 = ngay2 + 5;
    cout << "Ngay 2 + 5 ngay: " << ngay4 << '\n';

    NgayThangNam ngay5 = ngay2 - 10;
    cout << "Ngay 2 - 10 ngay: " << ngay5 << '\n';

    cout << "Ngay 2 == Ngay 3? " << (ngay2 == ngay3 ? "True" : "False") << '\n';
    cout << "Ngay 2 > Ngay 3? " << (ngay2 > ngay3 ? "True" : "False") << '\n';

    ngay2++;
    cout << "Ngay 2 sau khi ++: " << ngay2 << '\n';
    ngay3--;
    cout << "Ngay 3 sau khi --: " << ngay3 << '\n';

    return 0;
}
