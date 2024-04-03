#include <bits/stdc++.h>
using namespace std;

string findDuplicate(int N, vector<int>& numbers) {
    unordered_set<int> seen;
    for (int num : numbers) {
        if (seen.find(num) != seen.end()) {
            return "Yes";
        }
        seen.insert(num);
    }
    return "No";
}

int main() {
    int N;
    cout << "nhap so nguyen duong n: ";
    cin >> N;

    if (N < 1 || N > 10000) {
        cout << " n khong hop le." << endl;
    } else {
        vector<int> numbers(N);
        cout << "nhap chuoi so gom n so: ";
        for (int i = 0; i < N; ++i) {
            cin >> numbers[i];
        }

        string result = findDuplicate(N, numbers);
        cout << result << endl;
    }

    return 0;
}
