#include <bits/stdc++.h>
using namespace std;

char * delete_char(const char a[], const char c){
    int length = strlen(a);
    char *deleted_char = new char[length+1];
    char *ptr = deleted_char;
    const char * src = a;
    while(*src != '\0'){
        if(*src!= c){
            *ptr = *src;
            ptr ++;
        }
        src++;
    }
    *ptr='\0';
    return deleted_char;
}
int main(){
    const int max_length = 100;
    char a[max_length];
    cin.getline(a, max_length);
    char c;
    cin >> c;
    char *newString = delete_char (a,c);
    cout <<newString;
}

