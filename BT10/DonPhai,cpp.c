#include<bits/stdc++.h>
using namespace std;

char *pad_right(const char a[],const int n){
    int length = strlen(a);
    if(length >= n)
        return a;
    int numSpaces = n - length;
    char *newString = new char[length + numSpaces +1];
    char *ptr = newString;
    const char *src =a;
    while(*src != '\0'){
        *ptr = *src;
        ptr++;
        src++;
    }
    for (int i = 1; i <= numSpaces; i++){
        *ptr ='_';
        ptr ++;
    }
    *ptr = '\0';
    return newString;

}
int main(){
    const int max_length= 100;
    char a[max_length];
    cin.getline(a, max_length);
    int n;
    cin >> a;
    char *newString = pad_right(a, n);
    cout <<newString;

}
