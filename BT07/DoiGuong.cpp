#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(char a[]){
    int length = strlen(a);
    char *top = a;
    char *bot = a +length -1;
    while(top < bot){
        if(*top != *bot){
            return false;
        }
        top ++;
        bot --;
    }
    return true;
}

int main(){
    const int max_length = 100;
    char a[max_length];
    cin  >> a;
    if(is_palindrome(a))
        cout <<"true";
    else cout <<"false";


}
