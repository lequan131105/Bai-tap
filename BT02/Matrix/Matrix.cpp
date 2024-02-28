#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number (n < 100): ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (i + j > n ? i + j - n : i + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
