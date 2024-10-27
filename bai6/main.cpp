#include "TamGiac.cpp"
int main() {
	TamGiac a;
	a.Nhap();
	float goc, d;
	cout << "Nhap goc va do dai tinh tien:" ;
	cin >> goc >> d;
	a.TinhTien(goc, d);
	a.Xuat();
	return 0;
}