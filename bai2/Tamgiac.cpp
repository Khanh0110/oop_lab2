#include <iostream>
#include <cmath>  // Dùng cho hàm Quay (sin, cos)
#include "Tamgiac.h"
using namespace std;

// Hàm khởi tạo của DinhTG
DinhTG::DinhTG()
{
    x = 0 ;
    y = 0 ;
}

// Hàm nhập tọa độ của DinhTG
void DinhTG::Nhap()
{
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
}

// Hàm xuất tọa độ của DinhTG
void DinhTG::Xuat()
{
    cout << "(" << x << ", " << y << ")";
}

// Hàm tịnh tiến đỉnh DinhTG
void DinhTG::Tinhtien(int &dx, int &dy)
{
    x += dx;
    y += dy;
}

// Hàm phóng to đỉnh DinhTG theo tỷ lệ k
void DinhTG::Phongto(float &k)
{
    x = (x * k);  
    y = (y * k);
}

// Hàm thu nhỏ đỉnh DinhTG theo tỷ lệ k
void DinhTG::Thunho(float &k)
{
    x = (x / k); 
    y = (y / k);
}

// Hàm quay đỉnh DinhTG một góc goc quanh gốc tọa độ
void DinhTG::Quay(float &goc)
{
    float pi = 3.14 ; 
    float rad = goc * pi / 180.0;  // Đổi độ sang radian
    int xMoi =(x * cos(rad) - y * sin(rad));
    int yMoi =(x * sin(rad) + y * cos(rad));
    x = xMoi;
    y = yMoi;
}

// Hàm nhập tọa độ của tam giác
void Tamgiac::Nhap()
{
    cout << "Nhap dinh A:\n";
    A.Nhap();
    cout << "Nhap dinh B:\n";
    B.Nhap();
    cout << "Nhap dinh C:\n";
    C.Nhap();
}

// Hàm xuất tọa độ của tam giác
void Tamgiac::Xuat()
{
    cout << "Dinh A: ";
    A.Xuat();
    cout << "\nDinh B: ";
    B.Xuat();
    cout << "\nDinh C: ";
    C.Xuat();
    cout << endl;
}

// Hàm tịnh tiến tam giác
void Tamgiac::Tinhtien()
{
    int dx, dy;
    cout << "Nhap khoang cach tịnh tiến dx: ";
    cin >> dx;
    cout << "Nhap khoang cach tịnh tiến dy: ";
    cin >> dy;

    A.Tinhtien(dx, dy);
    B.Tinhtien(dx, dy);
    C.Tinhtien(dx, dy);
}

// Hàm phóng to tam giác
void Tamgiac::Phongto()
{
    float k;
    cout << "Nhap ti le phóng to k: ";
    cin >> k;

    A.Phongto(k);
    B.Phongto(k);
    C.Phongto(k);
}

// Hàm thu nhỏ tam giác
void Tamgiac::Thunho()
{
    float k;
    cout << "Nhap ti le thu nhỏ k: ";
    cin >> k;

    A.Thunho(k);
    B.Thunho(k);
    C.Thunho(k);
}

// Hàm quay tam giác
void Tamgiac::Quay()
{
    float goc;
    cout << "Nhap góc quay (độ): ";
    cin >> goc;

    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}


/*
class DinhTG
{
private:
    int x , y;
public:
    DinhTG() ;
    void Nhap() ;
    void Xuat() ;
    void Tinhtien() ;
    void Phongto() ;
    void Thunho() ;
    void Quay() ;
};


class Tamgiac
{
private:
    DinhTG A , B ,C ;
public:
    void Nhap();
    void Xuat();
    void Tinhtien() ;
    void Phongto() ;
    void Thunho() ;
    void Quay() ;

};
*/