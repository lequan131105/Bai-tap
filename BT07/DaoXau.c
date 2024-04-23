#include <bits/stdc++.h>
using namespace std;

void reverse(char a[]){
    char *start = a;
    char *end = a;
    while (end!='\0'){
        end++;
    }
    end--;
    while (start<end){
        char temp=start;
        start = end;
        end=temp;
        start ++;
        end --;
    }
}
int main(){
    char a[];
    cin >> a;
    reverse(a);
    cout << a;
}
