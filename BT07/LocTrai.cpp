#include <bits/stdc++.h>
using namespace std;

void trim_left(char a[]){
    char *ptr = a;
    while (*ptr== ' '){
        ptr ++;
    }
    char *newptr = a;
    while (*ptr != '\0'){
        *newptr = *ptr ;
        newptr ++;
        ptr ++;
    }
    *newptr = '\0';
}
int main (){
    const int max_length = 100;
    char a[max_length];
    cin.getline(a, max_length);
    trim_left(a);
    cout << a;
}
