#include <iostream>
#include "Diem.cpp"

using namespace std ; 

int main(){
    Diem a ;
    a.Nhap() ;
    a.Xuat();
    cout << '\n' ;
    a.GetHoanhDo();
    cout << '\n' ;
    a.GetTungDo();
    cout << '\n' ;
    a.SetHoanhDo();
    cout << '\n' ;
    a.SetTungDo();
    cout << '\n' ;
    a.TinhTien() ;
    return 0 ;
}