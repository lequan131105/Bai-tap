#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        int bit = n % 2;
        binary = to_string(bit) + binary;
        n /= 2;
    }
    return binary;
}
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

int main() {
    int decimalNumber;
    cout << "Nhap so nguyen he co so 10: ";
    cin >> decimalNumber;
    string binaryNumber = decimalToBinary(decimalNumber);
    cout << "Gia tri trong he nhi phan: " << binaryNumber << endl;
    int decimalNumberAgain = binaryToDecimal(binaryNumber);
    cout << "Gia tri trong he thap phan: " << decimalNumberAgain << endl;

    return 0;
}
