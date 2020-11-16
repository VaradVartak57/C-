#include<iostream>
using namespace std;

class Test 
{
        
        public: float l,b,h, volume;
                void input() {
                cout << "Enter length,breadth and height of a rectangle:";
                cin >> l>>b>>h;

    }

    void Volume() {
        volume = l*b*h;
    }

    void display() {
        cout << "Volume of rectangle is:" << volume;
    }
};

int main() {

    Test obj;

    obj.input();
    obj.Volume();
    obj.display();

    return 0;
}