#include <bits/stdc++.h>
using namespace std;

void delete_char(char a[], char c){
    char *src = a;
    char *dest = a;
    while (*src){
        if(*src != c){
            *dest = *src;
            dest ++;
        }
        src ++;
    }
    *dest = '\0';

}
int main(){
    const int max_length=100;
    char a[max_length];
    char c;
    cin >> a;
    cin >> c;
    delete_char(a, c);
    cout << a;
}
