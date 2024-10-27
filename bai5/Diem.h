class Diem {
private:
    int x, y; // Hoành độ và tung độ
public:
    Diem(int hoanh = 0, int tung = 0); // Khởi tạo điểm với giá trị mặc định là (0,0)
    //~Diem();
    void Nhap();       // Nhập tọa độ điểm
    void Xuat() const; // Xuất tọa độ điểm
    void NhanDoi();    // Nhân đôi hoành độ và tung độ
    void GanVeGocToaDo(); // Đưa điểm về gốc tọa độ (0,0)
    void TinhTien(int k, int d); // Tịnh tiến điểm theo hướng k với độ dịch chuyển d
};


