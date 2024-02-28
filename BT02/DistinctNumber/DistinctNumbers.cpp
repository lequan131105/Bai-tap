#include <bits/stdc++.h>
using namespace std;
int main(){

      int CurrentNumber, PreviousNumber;
      cin >> CurrentNumber;
      cout << CurrentNumber << " " ;
      while (true){
        cin >> CurrentNumber;
        if(CurrentNumber < 0){
            cout << CurrentNumber;
            return 0;
        }
        if(CurrentNumber!=PreviousNumber){
            cout << CurrentNumber << " ";
        }
        PreviousNumber = CurrentNumber;
      }
}

