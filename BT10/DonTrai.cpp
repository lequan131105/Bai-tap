#include <bits/stdc++.h>
using namespace std;

char * pad_left(const char a[],const int n){
    int length = strlen(a);
    if(length >= n){
        char *newString = new char [length +1];
        strcpy(newString, a);
        return newString;
    }
    int numSpaces = n - length;
    char *newString = new char[length + numSpaces+ 1];
    char *ptr = newString;
   const char *src = a;
    for(int i = 1; i <= numSpaces; i++){
        *ptr = ' ';
        ptr++;
    }
    while (*src != '\0'){
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
    char* newString = pad_left(a,n);
    cout << newString;
}
