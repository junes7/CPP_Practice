#include "Rectangle.h"

#include <iostream>
using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
    : upleft(x1, y1), lowright(x2, y2) {
    // empty
}

void Rectangle::ShowRecInfo() const {
    cout << "좌 상단: [" << upleft.GetX() << ", ";
    cout << upleft.GetY() << "]" << endl;
    cout << "우 하단: [" << lowright.GetX() << ", ";
    cout << lowright.GetY() << "]" << endl;
}