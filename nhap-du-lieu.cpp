#include <iostream>

using namespace std;
// Đọc dữ liệu từ bàn phím

int main()
{
    int a, b;
    // Đọc dữ liệu
    cout << "Xin moi nhap gia tri a, b" << endl;
    cin >> a >> b;
    cout << "Gia tri a: " << a << endl;
    cout << "Gia tri b: " << b << endl;
    int sum = a + b;
    cout << "Tong a + b = " << sum << endl;
    return 0;
}
