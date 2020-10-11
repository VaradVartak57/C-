/*
 * C++ program to check if given integer is even or odd
 */
#include<iostream>
using namespace std;
 
int main()
{
    int num;
 
    cout << "Enter the number : ";
    cin >> num;
    
    if (num % 2 == 0)
        cout <<  " The Number Entered is an even integer " << num;
    else
        cout <<  "The Number Entered is an odd integer " << num;
 
    return 0;
}