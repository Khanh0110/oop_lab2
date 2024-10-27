#include "DaGiac.h"
#include <iostream>
using namespace std;
void DaGiac::Nhap(){
    cout << "Nhap so dinh cua da giac: ";
    cin >> soDinh;
    Dinh = new Diem[soDinh];
    for(int i = 0; i < soDinh; i++){
        cout << "Nhap toa do diem " << i + 1 << ": \n";
        Dinh[i].Nhap();
    }
}
void DaGiac::Xuat(){
    for(int i = 0; i < soDinh; i++){
        cout << "Toa do dinh thu " << i + 1 << ": \n";
        Dinh[i].Xuat();
    }
}
void DaGiac::TinhTien(){
    int x, y;
    cout<< "Nhap vecto tinh tien: \n";
    cin>> x >> y;
    cout<<">Toa do da giac sau khi tinh tien: \n";
    for(int i = 0; i < soDinh; i++){
        Dinh[i].TinhTien(x, y);
    }
}
void DaGiac::PhongTo(){
    int k;
    cout << "Nhap he so phong to: ";
    cin >> k;
    cout<<">Toa do sau khi phong to: \n";
    for(int i = 0; i < soDinh; i++){
        Dinh[i].PhongTo(k);
    }
}
void DaGiac::ThuNho(){
    int l;
    cout << "Nhap he so thu nho: ";
    cin >> l;
    cout<<">Toa do da giac sau khi thu nho: \n";
    for(int i = 0; i < soDinh; i++){
        Dinh[i].ThuNho(l);
    }
}
void DaGiac::Quay(){
    double q;
    cout << "Nhap goc quay: ";
    cin >> q;
    cout<<">Toa do da giac sau khi quay: \n";
    for(int i = 0; i < soDinh; i++){
        Dinh[i].Quay(q);
    }
}
