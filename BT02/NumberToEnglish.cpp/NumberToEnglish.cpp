#include <bits/stdc++.h>


using namespace std;

vector<string> words = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string convertToWords(int n) {
    if (1 <= n && n < 20) {
        return words[n];
    } else if (20 <= n && n < 100) {
        return tens[n / 10] + (n % 10 != 0 ? " " + words[n % 10] : "");
    } else {
        return words[n / 100] + " hundred" + (n % 100 != 0 ? " and " + convertToWords(n % 100) : "");
    }
}

void numberToEnglish(int num) {
    if (num == 0) {
        cout << "zero" << endl;
    } else if (num < 0) {
        cout << "negative " << convertToWords(-num) << endl;
    } else {
        cout << convertToWords(num) << endl;
    }
}

int main() {
    int number;

    cout << "Enter a number between -999999999 and 999999999: ";
    cin >> number;
    cout << numberToEnglish(number);
    return 0;
}
