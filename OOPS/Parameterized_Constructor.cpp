#include<iostream>
using namespace std;

class Student {
    public:
	int rollNumber;
	int age;

    
    Student(int r) {
		cout << "Constructor 1 called !" << endl;
	
		rollNumber = r;
	}

	Student(int a, int r) {
		
		cout << "Constructor 2 called ! " << endl;
		age = a;
		rollNumber = r;
	}

	void display() {
		cout << age << " " << rollNumber << endl;
	}
};

int main(){

    Student s1(10, 1001);
	cout << "Address of s1 : " << &s1 << endl;

	Student s2(20);
	s2.display();
    
    


}
