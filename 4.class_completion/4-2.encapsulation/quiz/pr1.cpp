#include <iostream>
using namespace std;

class Point {
   private:
    int xpos;
    int ypos;

   public:
    void Init(int x, int y) {
        xpos = x;
        ypos = y;
    }

    void ShowPointInfo() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

class Circle {
   private:
    int radius;
    Point p;

   public:
    void Init(int x, int y, int r) {
        p.Init(x, y);
        radius = r;
    }
    void ShowCircleInfo() const {
        cout << "radius: " << radius << endl;
        p.ShowPointInfo();
    }
};

class Ring {
   private:
    Circle ic;
    Circle oc;

   public:
    void Init(int innerX, int innerY, int innerR, int outterX, int outterY, int outterR) {
        ic.Init(innerX, innerY, innerR);
        oc.Init(outterX, outterY, outterR);
    }
    void ShowRingInfo() const {
        cout << "Inner Circle Info..." << endl;
        ic.ShowCircleInfo();
        cout << "Outter Circle Info..." << endl;
        oc.ShowCircleInfo();
    }
};

int main(void) {
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}