#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    string numStr = to_string(num);
    int left = 0, right = numStr.length() - 1;
    while (left < right) {
        if (numStr[left] != numStr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int countPalindromicNumbers(int A, int B) {
    int count = 0;
    for (int num = A; num <= B; ++num) {
        if (isPalindrome(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    cout << "nhap so A: ";
    cin >> A;
    cout << "nhap so B: ";
    cin >> B;

    int result = countPalindromicNumbers(A, B);
    cout << "so cac so doi guong tu " << A << " den " << B << " la: " << result << endl;

    return 0;
}
