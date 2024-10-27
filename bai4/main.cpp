#include <iostream>
#include "ThiSinh.cpp"
using namespace std;
int main() {
	ThiSinh *a;
	int n;
	cout<<"Nhap so luong thi sinh: ";
	cin>>n;
	a=new ThiSinh[n];
	for (int i=0;i<n;i++){
        cout<<">Nhap thong tin thi sinh thu "<<i+1<<": \n";
		a[i].Nhap();
	}
	for (int i=0;i<n;i++){
	    cout<<">Thong tin thi sinh thu "<<i+1<<": \n";
		a[i].Xuat();
		cout<<endl;
	}
	cout<<">Thi sinh co tong diem lon hon 15 : \n";
	int dem=0;
	for (int i=0;i<n;i++){
		if (a[i].Tong()>15){
			a[i].Xuat();
			cout<<endl;
            dem++;
		}
		if (dem==0) cout<<">Khong co thi sinh nao co tong diem lon hon 15\n";
	}
	cout<<">Thi sinh co diem cao nhat :\n";
	int max=0;
	for (int i = 1; i < n; i++){
		if (a[max].Tong()<a[i].Tong())
			max=i;
	}
	a[max].Xuat();
}
