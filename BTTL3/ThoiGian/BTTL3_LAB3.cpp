#include<iostream>
#include "ThoiGian.h"
using namespace std;

int main() {
    ThoiGian tg1, tg2;

    // Nhap hai doi tuong ThoiGian tu ban phim
    cout << "Nhap thoi gian tg1 (gio phut giay): ";
    cin >> tg1;
    cout << "Nhap thoi gian tg2 (gio phut giay): ";
    cin >> tg2;

    // Hien thi tg1 va tg2 de xac nhan da nhap dung
    cout << "Thoi gian tg1: " << tg1 << endl;
    cout << "Thoi gian tg2: " << tg2 << endl;

    // Kiem tra phuong thuc TinhGiay() tren tg1 va tg2
    cout << "So giay trong tg1: " << tg1.TinhGiay() << " giay" << endl;
    cout << "So giay trong tg2: " << tg2.TinhGiay() << " giay" << endl;

    // Thuc hien phep cong tg1 + tg2
    ThoiGian tg3 = tg1 + tg2;
    cout << "Thoi gian tg3 (tg1 + tg2): " << tg3 << endl;

    // Thuc hien phep tru tg1 - tg2
    ThoiGian tg4 = tg1 - tg2;
    cout << "Thoi gian tg4 (tg1 - tg2): " << tg4 << endl;

    // So sanh tg1 va tg2
    if (tg1 == tg2) {
        cout << "tg1 bang tg2" << endl;
    }
    else {
        cout << "tg1 khong bang tg2" << endl;
    }

    if (tg1 > tg2) {
        cout << "tg1 lon hon tg2" << endl;
    }
    else if (tg1 < tg2) {
        cout << "tg1 nho hon tg2" << endl;
    }

    // Kiem tra toan tu tang, giam tren tg1
    tg1++;
    cout << "tg1 sau khi tang (tg1++): " << tg1 << endl;

    tg1--;
    cout << "tg1 sau khi giam (tg1--): " << tg1 << endl;

    // Kiem tra TinhLaiGio tren mot so giay do nguoi dung nhap
    int giay;
    cout << "Nhap so giay de kiem tra TinhLaiGio cho tg1: ";
    cin >> giay;
    tg1.TinhLaiGio(giay);
    cout << "tg1 sau khi goi TinhLaiGio voi " << giay << " giay: " << tg1 << endl;

    return 0;
}
