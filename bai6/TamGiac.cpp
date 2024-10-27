#include "TamGiac.h"
#include <math.h>
#define PI 3.14
void TamGiac::Nhap() {
	cout << "Nhap toa do cac dinh cua tam giac: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}
void TamGiac::Xuat() {
	cout << '(' << x1 << ',' << y1 << ')' << endl;
	cout << '(' << x2 << ',' << y2 << ')' << endl;
	cout << '(' << x3 << ',' << y3 << ')' << endl;
}
void TamGiac::TinhTien(float goc,float d ) {
	float rad = (goc * PI) / 180;
	x1 += d * cos(rad); y1 += d*sin(rad);
	x2 += d * cos(rad); y2 += d * sin(rad);
	x3 += d * cos(rad); y3 += d * sin(rad);
}