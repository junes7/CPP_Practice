/*
[3, 4]
[10, 20]
[13, 24]
[7, 16]
*/
#include <cstring>
#include <iostream>
using namespace std;

class Point {
   private:
    int xpos, ypos;

   public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

    void ShowPosition() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }

    Point operator+(const Point &ref) {
        Point pos(xpos + ref.xpos, ypos + ref.ypos);
        return pos;
    }

    Point operator-(const Point &ref) {
        Point pos(xpos - ref.xpos, ypos - ref.ypos);
        return pos;
    }
};

int main(void) {
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1.operator+(pos2);
    Point pos4 = pos2.operator-(pos1);
    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();
    pos4.ShowPosition();
    return 0;
}