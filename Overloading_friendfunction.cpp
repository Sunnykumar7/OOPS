#include <iostream>
using namespace std;
class Counter {
private:
    int count;

public:
    Counter() : count(0) {}
    friend Counter operator++(Counter &c);

    void display() {
        cout << "Count: " << count << endl;
    }
};
Counter operator++(Counter &c) {
    ++c.count;
    return c;
}

int main() {
    Counter c1;
    c1.display();

    ++c1;
    c1.display();

    return 0;
}