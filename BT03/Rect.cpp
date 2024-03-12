#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

struct Rect {
    int x, y;
    int w, h;


    bool contains(const Point& p) const {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};

int main() {
     Rect rect;
    cin >> rect.x >> rect.y >> rect.w >> rect.h;
    Point p;
    cin >> p.x >>p.y;

    cout << "Rect contains p :" << (rect.contains(p) ?"true":"false") << endl;


    return 0;
}
