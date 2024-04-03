#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cout << "Nhap so luong phan tu cua day so: ";
    cin >> N;
    vector<int> numbers(N);
    cout << "Nhap cac phan tu cua day so: ";
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    int minElement = numeric_limits<int>::max();
    int maxElement = numeric_limits<int>::min();
    for (int num : numbers) {
        if (num < minElement) {
            minElement = num;
        }
        if (num > maxElement) {
            maxElement = num;
        }
    }
    int sumEven = 0;
    int countOdd = 0;
    for (int num : numbers) {
        if (num % 2 == 0) {
            sumEven += num;
        } else {
            countOdd++;
        }
    }
    cout << "Phan tu nho nhat: " << minElement << endl;
    cout << "Phan tu lon nhat: " << maxElement << endl;
    cout << "Tong cac phan tu chan: " << sumEven << endl;
    cout << "So luong cac phan tu le: " << countOdd << endl;

    return 0;
}
