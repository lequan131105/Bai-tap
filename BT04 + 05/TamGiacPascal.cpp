#include<bits/stdc++.h>


using namespace std;


void printPascalTriangle(int n) {
    for (int line = 1; line <= n; line++) {
        int C = 1;
        for (int i = 1; i <= line; i++) {
            cout << setw(4) << C << " ";
            C = C * (line - i) / i;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap vao so hang cua tam giac Pascal: ";
    cin >> n;

    printPascalTriangle(n);

    return 0;
}
