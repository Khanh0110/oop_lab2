#include <iostream>
#include "List.cpp"
using namespace std ;

int main() {
    List list; // B1: Khởi tạo list rỗng
    int n;

    while (true) { // B2: Vòng lặp vô hạn cho đến khi n = -1
        cout << "Nhập chỉ thị n (-1 để kết thúc): ";
        cin >> n;

        if (n == -1) { // Nếu n = -1 thì nhảy đến B3
            break;
        }

        double x, y;
        switch (n) {
            case 0:
                cout << "Nhập phần tử x để thêm: ";
                cin >> x; // Nhập phần tử x
                list.add(x);    // Thêm x vào list
                break;
            case 1:
                cout << "Nhập phần tử x để xóa: ";
                cin >> x; // Nhập phần tử x
                list.removeFirst(x); // Xóa phần tử đầu tiên có giá trị x
                break;
            case 2:
                cout << "Nhập phần tử x để xóa tất cả: ";
                cin >> x; // Nhập phần tử x
                list.removeAll(x); // Xóa tất cả phần tử có giá trị x
                break;
            case 3:
                cout << "Nhập vị trí x và giá trị mới y: ";
                cin >> x >> y; // Nhập x và y
                list.update(static_cast<int>(x), y); // Thay đổi phần tử thứ x bằng y nếu x hợp lệ
                break;
            default:
                cout << "Chỉ thị không hợp lệ. Vui lòng thử lại." << endl;
                break;
        }
    }

    // B3: In ra màn hình list hiện tại theo mẫu [a,b,c,d,...]
    cout << "List hiện tại: ";
    list.print();

    // B4: Kết thúc chương trình
    return 0;
}
