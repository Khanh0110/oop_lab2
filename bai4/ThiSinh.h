#pragma once
class ThiSinh {
private:
    char Ten[100];
    int MSSV, iNgay, iThang, iNam;
    float fToan, fVan, fAnh;
public:
    void Nhap();
    void Xuat();
    float Tong();
};
