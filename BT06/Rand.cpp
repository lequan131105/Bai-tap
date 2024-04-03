#include <bits/stdc++.h>
using namespace std;
int randomNumber(int N){
    srand(time(nullptr));
    return rand() % N;
}
int main (){
    int N;
    cout << "nhap so N: ";
    cin >> N;
    cout << "so ngau nhien nho hon " << N << "la " <<randomNumber(N);
}
