/* 
* PROGRAM TO SWAP NUMBERS
*/

#include <iostream>
using namespace std;

int main()
{
    int num1,num2, temp;
    cout << "     PROGRAM TO SWAP TWO NUMBERS ENTERED BY USER \n\n\n    ";

    cout << "enter the numbers to be swapped : \n";
    cin >> num1>>num2;
    cout << "Before swapping." << endl;
    cout << "num1 = " << num1 << endl ;
    cout << "num2 = " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "\nAfter swapping." << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    

    return 0;
}