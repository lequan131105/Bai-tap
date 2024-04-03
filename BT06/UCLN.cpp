#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << result << endl;

    return 0;
}
