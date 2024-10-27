class Diem
{
private:
    int iHoanh ;
    int iTung ;
public:
    void Nhap() ;
    void Xuat();
    Diem() ;
    Diem(int Hoanh, int Tung);
    Diem(const Diem &x) ;
    void GetTungDo();
    void GetHoanhDo();
    void SetTungDo();
    void SetHoanhDo();
    void TinhTien() ;

};

