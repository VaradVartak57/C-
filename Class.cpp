#include <iostream>

using namespace std;

class Person{
	public:
	string name;
    string surname;
	int age;
    string gender;
    string Bloodgroup;
	};

int main(){
	Person p1;
	p1.name="Varad";
    p1.surname="Vartak";
	p1.age=18;
    p1.gender="Male";
    p1.Bloodgroup="B+";
	cout<<p1.name <<"\n";
	cout<<p1.surname <<"\n";
    cout<<p1.age <<"\n";
    cout<<p1.gender <<"\n";
    cout<<p1.Bloodgroup <<"\n";
}