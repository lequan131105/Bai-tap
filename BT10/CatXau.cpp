#include<bits/stdc++.h>
using namespace std;

char * truncate(const char a[], const int n){
    int length = strlen(a);
    if(length <= n){
        char * newString = new char[length +1];
        strcpy(newString, a);
        return newString;
    }
    char * newString = new char[n+1];
    char * ptr = newString;
    const char *src =a ;
    for (int i=1; i<=n; i++){
        *ptr = *src;
        ptr ++;
        src ++;
    }
    *ptr = '\0';
    return newString;
}
int main (){
    const int max_length = 100;
    char a[max_length];
    cin.getline(a, max_length);
    int n;
    cin >> n;
    char * newString = truncate(a, n);
    cout << newString;
}
