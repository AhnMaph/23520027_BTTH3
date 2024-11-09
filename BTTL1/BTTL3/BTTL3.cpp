#include <iostream>
#include "PhanSo.h"
using namespace std;
int main()
{
    PhanSo p1;
    cout << "Nhap tu mau cua p1: ";
    cin >> p1;
    PhanSo p2(1.0, 2.0);
    cout << "p1 = " << p1 << "\n";
    cout << "p2 = " << p2 << "\n";

    cout << "\n";
    cout << "p1 + p2 = " << p1 + p2<<"\n";
    cout << "p1 - p2 = " << p1 - p2 << "\n";
    cout << "p1 * p2 = " << p1 * p2 << "\n";
    cout << "p1 / p2 = " << p1 / p2 << "\n";
    cout << "\n";

    cout << "p2 - 2.3 = " << p2 - 2.3 << "\n";
    cout << "p2 + 4.5 = " << p2 + 4.5 << "\n";
    cout << "p2 / 1.1 = " << p2 / 1.1 << "\n";
    cout << "p2 * 3.2 = " << p2 * 3.2 << "\n";
    cout << "\n";
    cout << "p1 - 4 = " << p1 - 4 << "\n";
    cout << "p1 + 11 = " << p1 + 11 << "\n";
    cout << "p1 / 4 = " << p1 / 4 << "\n";
    cout << "p1 * 2 = " << p1 * 2 << "\n";

    return 0;
}
