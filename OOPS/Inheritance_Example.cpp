#include <iostream>
using namespace std;
class Vehicle {
	private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;

};

class Car : public Vehicle {
	public :
		int numGears;


		void print() {
			cout << "NumTyres : " << numTyres << endl;
			cout << "Color : " << color << endl;
			cout << "Num gears : " << numGears << endl;
	//		cout << "Max Speed : " << maxSpeed << endl;
		}


};



int main() {
	Vehicle v;

	v.color = "Blue";
	// v.maxSpeed = 100;
	// v.numTyres = 4;


	Car c;
	c.color = "Black";
//	c.numTyres = 4;
	c.numGears = 5;

    c.print();
}

