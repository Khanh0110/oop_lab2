#include "TamGiac.h"
int main() {
	TamGiac a;
	a.Nhap();
	float goc, d;
	cin >> goc >> d;
	a.TinhTien(goc, d);
	a.Xuat();
	return 0;
}