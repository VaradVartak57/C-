#include<iostream>
using namespace std;

class Test 
{
        
        public: float a,b,h, area;
                void input() {
                cout << "Enter length,breadth and height of a rectangle:";
                cin >> a>>b>>h;

    }

    void Volume() {
        area = a*b*h;
    }

    void display() {
        cout << "Volume of rectangle is:" << area;
    }
};

int main() {

    Test obj;

    obj.input();
    obj.Volume();
    obj.display();

    return 0;
}