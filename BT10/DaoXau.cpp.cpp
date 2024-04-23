#include <bits/stdc++.h>
using namespace std;

char* reverse(const char a[]){
    int length = strlen(a);
    char *reversed = new char[length +1];
    for(int i = 0; i < length; i++){
        reversed[i]=a[length -1 -i];
    }
    reversed[length]='\0';
    return reversed;
}
int main(){
    const int max_length = 100;
    char a[max_length];
    cin.getline(a, max_length);
    char *reversedString = reverse(a);
    cout << reversedString;
}
