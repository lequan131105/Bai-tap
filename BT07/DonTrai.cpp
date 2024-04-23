#include <bits/stdc++.h>
using namespace std;

void pad_left(char a[], int n){
    int length=strlen(a);
    if(length >= n)
        return ;
    int numSpaces = n - length;
    char *endptr = a + length;
    char *newEndPtr = endptr + numSpaces;
    while (endptr >= a){
        *newEndPtr = *endptr;
        newEndPtr--;
        endptr--;
    }
    for(int i = 0;i < numSpaces; i++){
        *a = ' ';
        a++;
    }
}

int main(){
    const int max_length = 100;
    char a[max_length];
    cin >> a;
    int n;
    cin >> n;
    pad_left(a,n);
    cout << a;
}
