#include <iostream>
using namespace std;

struct Point {
    double x, y;
};


Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    Point p1;
    cin >> p1.x >>p1.y;
    Point p2;
    cin >> p2.x >> p2.y;

    Point mid = mid_point(p1, p2);

    cout << "trung diem cua hai diem  (" << p1.x << ", " << p1.y << ") và (" << p2.x << ", " << p2.y << ") là: (" << mid.x << ", " << mid.y << ")" << endl;

    return 0;
}
