#include <bits/stdc++.h>
using namespace std;

void reverse(char a[]){
    int length = strlen(a);
    char *start = a;
    char *bot = a + length -1;

    while (start<bot){
        char temp = *start;
        *start = *bot;
        *bot = temp;
        start ++;
        bot --;
    }
}
int main(){
    const int max_length = 100;
    char a[max_length];
    cin >> a;
    reverse(a);
    cout << a;
}
