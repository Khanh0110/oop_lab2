class DinhTG
{
private:
    int x , y;
public:
    DinhTG() ;
    void Nhap() ;
    void Xuat() ;
    void Tinhtien(int &dx , int &dy) ;
    void Phongto(float &k) ;
    void Thunho(float &k) ;
    void Quay( float &goc) ;
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


