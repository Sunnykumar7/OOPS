#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle() {
        length = 0;
        width = 0;
    }
    Rectangle( Rectangle & obj){
        length = obj.length;
        width=obj.width;
    }
    Rectangle(int l) {
        length = l;
        width = l;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int getSqArea() {
        return length * length;
    }
    int getRectArea() {
        return length * width;
    }
};
int main() {
    Rectangle r1; 
    Rectangle r2(5);
    Rectangle r3(4, 6);
    r1=r2;
    r1=r3;
     cout << "Area of square with side 5: " << r1.getSqArea() << endl;
    cout << "Area of square with side 5: " << r2.getSqArea() << endl;
    cout << "Area of rectangle with length 4 and width 6: " << r3.getRectArea() << endl;
    //for copy constructor
    return 0;
}