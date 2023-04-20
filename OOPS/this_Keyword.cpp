#include <iostream>
using namespace std;
class Student {

	public :
    int age;
	int rollNumber;
	
	Student(int rollNumber) {
		cout << "Constructor 2 called !" << endl;
	
		this -> rollNumber = rollNumber;
	}

	Student(int a, int r) {
		cout << "this : " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		this -> age = a;
		this -> rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}

	

};

int main() {

	Student s1(10, 1001);
	cout << "Address of s1 : " << &s1 << endl;

	Student s2(20);
	s2.display();
	
}

