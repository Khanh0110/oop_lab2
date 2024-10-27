#include <iostream>
#include "Diem.cpp"
using namespace std;

int main() {
    Diem diem;
    diem.Nhap();

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cout << "Nhap chi thi x: ";
        cin >> x;

        if (x == 1) {
            diem.NhanDoi();
            cout << "Toa do diem sau khi nhan doi: ";
            diem.Xuat();
        } else if (x == 2) {
            diem.GanVeGocToaDo();
            cout << "Toa do diem sau khi gan ve goc toa do: ";
            diem.Xuat();
        } else if (x == 3) {
            int k, d;
            cout << "Nhap huong tinh tien k (0: theo truc x, khac 0: theo truc y): ";
            cin >> k;
            cout << "Nhap do tinh tien d: ";
            cin >> d;
            diem.TinhTien(k, d);
            cout << "Toa do diem sau khi tinh tien: ";
            diem.Xuat();
        } else {
            cout << "Chi thi khong hop le, bo qua." << endl;
        }
    }

    cout << "Toa do diem cuoi cung sau khi thuc hien tat ca chi thi: ";
    diem.Xuat();

    return 0;
}
