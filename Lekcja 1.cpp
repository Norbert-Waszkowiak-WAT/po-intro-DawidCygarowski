#include <iostream>
using namespace std;
 
class Point {
public:
    int x;
    int y;
   
   
    Point(int x, int y) : x(x), y(y) {}
   
   
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
 
int main() {
   
    Point point1(67, 76);
    Point point2(-4, 8);
    Point point3(0, 0);
   
 
    cout << "Punkty:" << endl;
    point1.print();
    point2.print();
    point3.print();
   
    return 0;
}