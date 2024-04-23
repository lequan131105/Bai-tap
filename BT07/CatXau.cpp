#include <bits/stdc++.h>
using namespace std;

void truncate(char a[], int n){
    int length = strlen(a);
    if(length <= n)
        return;
    char *endptr = a + n;
    *endptr = '\0';

}

int main (){
    const int max_length = 100;
    char a[max_length];
    cin >> a;
    int n;
    cin >> n;
    truncate(a,n);
    cout << a;
}
