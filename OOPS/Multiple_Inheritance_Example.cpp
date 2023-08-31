#include <iostream>
using namespace std;
class Student {
	public :

		string name;

		void print() {
			cout << "Student " << endl;
		}
};
class Teacher {
	public : 
		string name;
		string age;

		void print() {
			cout << "Teacher" << endl;
		}
};

class TA : public Teacher, public Student {

	public :
		void print() {
			cout << "TA " << endl;
		}
};



int main() {
	TA a;

//	a.Student :: print();

	a.print();

	
	a.Teacher :: name = "abcd";

}

