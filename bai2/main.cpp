#include <iostream>
#include "Tamgiac.cpp"

using namespace std ;

int main()
{
    Tamgiac tg;
    tg.Nhap();
    
    cout << "\nTam giac ban dau:\n";
    tg.Xuat();

    tg.Tinhtien();
    cout << "\nSau khi tịnh tiến:\n";
    tg.Xuat();

    tg.Phongto();
    cout << "\nSau khi phóng to:\n";
    tg.Xuat();

    tg.Thunho();
    cout << "\nSau khi thu nhỏ:\n";
    tg.Xuat();

    tg.Quay();
    cout << "\nSau khi quay tam giác:\n";
    tg.Xuat();

    return 0;
}