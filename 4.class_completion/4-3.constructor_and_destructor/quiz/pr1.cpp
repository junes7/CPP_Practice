#include <iostream>
using namespace std;

class Point {
   private:
    int xpos;
    int ypos;

   public:
    Point(const int x, const int y)
        : xpos(x), ypos(y) {
    }

    void ShowPointInfo() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

class Circle {
   private:
    Point center;
    int radius;

   public:
    Circle(const int x, const int y, const int r)
        : center(x, y), radius(r) {
    }

    void ShowCircleInfo() {
        cout << "radius: " << radius << endl;
        center.ShowPointInfo();
    }
};

class Ring {
   private:
    Circle ic;
    Circle oc;

   public:
    Ring(const int inX, const int inY, const int inR, const int outX, const int outY, const int outR)
        : ic(inX, inY, inR), oc(outX, outY, outR) {
    }

    void ShowRingInfo() {
        cout << "Inner Circle Info..." << endl;
        ic.ShowCircleInfo();
        cout << "Outter Circle Info..." << endl;
        oc.ShowCircleInfo();
    }
};

int main(void) {
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}
