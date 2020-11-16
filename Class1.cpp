#include <iostream>
using namespace std;

class Class1 {

   public:
    double radius;

    double calculateArea() {
        return 3.142 * radius * radius;
    }

};

int main() {

    Class1 Class11;

    Class11.radius = 42.5;
    cout << "Area of circle =  " << Class11.calculateArea() << endl;

    return 0;
}