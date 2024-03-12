#include <iostream>
#include <string>
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

struct Ship {
    Rect rect;
    string id;
    int dx, dy;


    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};


void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << endl;
    cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {
    Ship ship;
    ship.id = "Titanic";
    ship.rect = {0, 0, 10, 10};
    ship.dx = 1;
    ship.dy = 1;

    display(ship);

    ship.move();

    display(ship);

    return 0;
}
