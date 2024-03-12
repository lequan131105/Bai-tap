#include <iostream>
using namespace std;

struct Point {
    int x, y;
};


void ChangeByValue(Point p) {
    p.x = 100;
    p.y = 200;
}

void ChangeByReference(Point &p) {
    p.x = 100;
    p.y = 200;
}

int main() {
    Point p1 = {50, 50};
    Point p2 = {50, 50};

    cout << "gia tri ban dau p1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "gia tri ban dau p2: (" << p2.x << ", " << p2.y << ")" << endl;


    ChangeByValue(p1);
    cout << "sau khi thay doi bang tham tri, p1: (" << p1.x << ", " << p1.y << ")" << endl;


    ChangeByReference(p2);
    cout << "Sau khi thay doi bang tham bien, p2: (" << p2.x << ", " << p2.y << ")" << endl;

    return 0;
}
