/* C++ implementation to convert infix expression to postfix*/
// Note that here we use std::stack  for Stack operations
#include <vector>
#include <climits>
#include <iostream>
using namespace std;
class Polynomial {
    public:
    int *degCoeff;      // Name of your array (Don't change this)
    
    // Complete the class
    int capacity;

    public:

        Polynomial(){
            degCoeff = new int[100];
            capacity = 100;
        }

        Polynomial(Polynomial const &p){
            this -> degCoeff = new int[p.capacity];
            for(int i=0;i<p.capacity;i++){
                this -> degCoeff[i] = p.degCoeff[i]; 
            }
            this -> capacity = p.capacity;
        }
    
        void setCoefficient(int d,int coeff){
            if(d >= capacity){
                int *newDegCoeff = new int[capacity+d];
                for(int i=0;i<capacity;i++){
                    newDegCoeff[i] = degCoeff[i];
                }

                delete []degCoeff;
                degCoeff = newDegCoeff;
                capacity += (d);
            }
            this->degCoeff[d] = coeff;
        }

        Polynomial operator+(Polynomial const &p){
            
            Polynomial d;
            for(int i=0;i<capacity;i++){
                d.degCoeff[i] = degCoeff[i] +  p.degCoeff[i];
            }

            return d;
        }

        Polynomial operator-(Polynomial const &p){
            
            Polynomial d;
            for(int i=0;i<capacity;i++){
                d.degCoeff[i] = degCoeff[i] -  p.degCoeff[i];
            }

            return d;
        }

       Polynomial operator*(Polynomial const &p2){

        Polynomial pNew;

        for (int i = 0; i < this->capacity; i++){

            for (int j = 0; j < p2.capacity; j++){

                // if(this -> degCoeff[i] != 0 && p2.degCoeff[j] != 0){

                int coeff1 = this->degCoeff[i] * p2.degCoeff[j];
                if (pNew.capacity > i + j){
                    coeff1 += pNew.degCoeff[i + j];
                }

                pNew.setCoefficient(i + j, coeff1);
                //}
            }
        }
        return pNew;
    }

        void operator=(Polynomial const &p){
            this -> degCoeff = new int[p.capacity];
            for(int i=0;i<p.capacity;i++){
                this -> degCoeff[i] = p.degCoeff[i]; 
            }
            this -> capacity = p.capacity;
        }

        void print(){
            for(int i=0;i<capacity;i++){
               if(this->degCoeff[i] != 0)
                cout<<this->degCoeff[i]<<"x"<<i<<" ";
            }
        }
};




//Driver program to test above functions
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    switch(choice){
            // Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
