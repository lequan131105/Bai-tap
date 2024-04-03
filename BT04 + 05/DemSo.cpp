#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Nhap so luong phan tu cua day so: ";
    cin >> N;
    vector<int> numbers(N);
    cout << "Nhap cac phan tu cua day so (0 - 9): ";
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    int count[10] = {0};
    for (int num : numbers) {
        count[num]++;
    }
    cout << "So luong cac so tu 0 den 9 trong day so la: " << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "So " << i << ": " << count[i] << endl;
    }

    return 0;
}
