#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x,y;
};
void Print(Point p){
    cout <<"("<<p.x<<","<<p.y<<")";
}
int main(){
    Point p;
    cin >> p.x >> p.y;
    Print(p);
    return 0;
}

