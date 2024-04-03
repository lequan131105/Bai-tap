
#include <iostream>
using namespace std;
void printSpacesAndStars(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
}

int main() {
    int numRows;
    cout << "Nhap so dong cua tam giac hoa thi: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; ++i) {
        printSpacesAndStars(numRows - i, 2 * i - 1);
        cout << endl;
    }

    return 0;
}
