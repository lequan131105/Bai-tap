#include <bits/stdc++.h>
using namespace std;

void pad_right(char a[], int n){
    int length = strlen(a);
    if(length >= n)
        return;
    char *bot = a + length;
    while(length <n){
        *bot = ' ';
        *bot++;
        length ++;
    }
    *bot = '\0';
}
int main (){
    const int max_length = 100;
    char a[max_length];
    cin >> a;
    int n;
    cin >> n;
    pad_right(a, n);
    cout << a;
}
