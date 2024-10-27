#include<iostream>
#include "Diem.h"

using namespace std ;

// nhap toa do hoanh tung
void Diem::Nhap(){
    cout << "Nhap diem x(iHoanh,iTung):" ;
    cin >> iHoanh >> iTung ;
} 

// xuat diem
void Diem::Xuat(){
    cout <<"Toa do diem:" <<'(' <<iHoanh << ',' << iTung <<')'; 
}
// khoi tao co dinh
Diem::Diem(){
    iHoanh = 0 ; 
    iTung = 0 ;
}

// truyen tham so
Diem::Diem(int Hoanh, int Tung){
    iHoanh = Hoanh ;
    iTung = Tung ;
}

// sao chep
Diem::Diem(const Diem &x){
    iHoanh = x.iHoanh ;
    iTung = x.iTung ;
}

void Diem::GetHoanhDo(){
    cout <<"Hoanh do la: " << iHoanh;
}

void Diem::GetTungDo(){
    cout << "Tung do la: " << iTung ;

}

// hoanh do moi
void Diem::SetHoanhDo(){
    int hoanh_m ;
    cout << "Nhap hoanh do moi: " ;
    cin >> hoanh_m ;
    iHoanh = hoanh_m ;
}

void Diem::SetTungDo(){
    int tung_m ;
    cout << "Nhap tung do moi: " ;
    cin >> tung_m ;
    iTung = tung_m;

}

void Diem::TinhTien(){
    int x ,y;
    cout << " nhap gia tri tinh tien x: " ; cin >> x ;
    cout << " nhap gia tri tinh tien y: " ; cin >> y ;
    cout << "diem da tinh tien(hoanh,tung): " << '(' << x+iHoanh <<',' << y+ iTung << ')' ;

}