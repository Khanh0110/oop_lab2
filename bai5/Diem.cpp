#include <iostream>
#include "Diem.h"
using namespace std;
// Định nghĩa hàm khởi tạo
Diem::Diem(int hoanh, int tung) : x(hoanh), y(tung) {}

// Định nghĩa hàm nhập
void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> x;
    cout << "Nhap tung do: ";
    cin >> y;
}

// Định nghĩa hàm xuất
void Diem::Xuat() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

// Định nghĩa hàm nhân đôi
void Diem::NhanDoi() {
    x *= 2;
    y *= 2;
}

// Định nghĩa hàm đưa về gốc tọa độ
void Diem::GanVeGocToaDo() {
    x = 0;
    y = 0;
}

// Định nghĩa hàm tịnh tiến
void Diem::TinhTien(int k, int d) {
    if (k == 0) {
        x += d; // Tịnh tiến theo trục x
    } else {
        y += d; // Tịnh tiến theo trục y
    }
}
