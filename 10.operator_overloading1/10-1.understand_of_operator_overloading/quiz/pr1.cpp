#include <iostream>
using namespace std;

class Point {
   private:
    int xpos, ypos;

   public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

    void ShowPosition() const { cout << "[" << xpos << ", " << ypos << "]" << endl; }
    // member function
    Point operator+(const Point &ref) {
        Point pos(xpos + ref.xpos, ypos + ref.ypos);
        return pos;
    }

    Point operator-(const Point &ref) {
        Point pos(xpos - ref.xpos, ypos - ref.ypos);
        return pos;
    }

    Point &operator+=(const Point &ref) {
        xpos += ref.xpos;
        ypos += ref.ypos;
        return *this;
    }

    Point &operator-=(const Point &ref) {
        xpos -= ref.xpos;
        ypos -= ref.ypos;
        return *this;
    }

    // global function
    friend Point operator+(const Point &pos1, const Point &pos2);

    friend Point operator-(const Point &pos1, const Point &pos2);

    friend bool operator==(const Point &pos1, const Point &pos2);

    friend bool operator!=(const Point &pos1, const Point &pos2);
};

Point operator+(const Point &pos1, const Point &pos2) {
    Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
    return pos;
}

Point operator-(const Point &pos1, const Point &pos2) {
    Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
    return pos;
}

bool operator==(const Point &pos1, const Point &pos2) {
    // warning: infinite recursion detected [-Winfinite-recursion] 경고 발생
    // return (pos1 == pos2);
    return (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos) ? true : false;
}

bool operator!=(const Point &pos1, const Point &pos2) {
    // return (pos1.xpos != pos2.xpos || pos1.ypos != pos2.ypos) ? true : false;
    return !(pos1 == pos2);
}
/*
[25, 37]
[15, 23]
[25, 37]
[15, 23]
[10, 14]
not equal
[5, 7]
equal
*/

int main(void) {
    Point pos1(20, 30);
    Point pos2(5, 7);
    Point pos3(5, 7);
    Point pos4 = pos1.operator+(pos2);
    Point pos5 = pos1 - pos2;
    // global function
    (pos1 + pos2).ShowPosition();
    (pos1 - pos2).ShowPosition();
    // member function
    pos4.ShowPosition();
    pos5.ShowPosition();
    // member function
    (pos2 += pos3).ShowPosition();
    // global function
    cout << ((pos2 == pos3) ? "equal" : "not equal") << endl;
    // member function
    (pos2 -= pos3).ShowPosition();
    // global function
    cout << ((pos2 != pos3) ? "not equal" : "equal") << endl;
    return 0;
}