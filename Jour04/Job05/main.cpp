#include <iostream>
#include <string>

struct Point
{
    int x;
    int y;
};

int main() {
    Point p;
    p.x = 1;
    p.y = 5;
    Point *ptr = &p;
    ptr->x = 3;
    ptr->y = 8;
    std::cout << "(" << p.x << ", " << p.y << ")";
}