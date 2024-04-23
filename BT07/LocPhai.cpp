#include <bits/stdc++.h>
using namespace std;

void trim_right(char a[]){
    int length = strlen(a);
    char * ptr = a + length -1;
    while(*ptr == ' '){
        ptr --;
    }
    ptr ++;
    *ptr = '\0';
}
int main(){
    const int max_length =100;
    char a[max_length];
    cin.getline(a, max_length);
    trim_right(a);
    cout << a;
}
