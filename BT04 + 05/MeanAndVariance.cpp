#include <bits/stdc++.h>
using namespace std;
double mean(const vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return static_cast<double>(sum) / numbers.size();
}

double variance(const vector<int>& numbers, double mean) {
    double sumSquaredDiff = 0;
    for (int num : numbers) {
        sumSquaredDiff += pow(num - mean, 2);
    }
    return sumSquaredDiff / numbers.size();
}

int main() {
    int n;
    cout << "Nhap so luong so trong day: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Nhap cac so trong day: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    double meanValue = mean(numbers);
    double varianceValue = variance(numbers, meanValue);

    cout << "Gia tri trung binh cua day so: " << meanValue << endl;
    cout << "Phuong sai cua day so: " << varianceValue << endl;

    return 0;
}
