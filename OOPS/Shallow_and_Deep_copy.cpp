#include<iostream>
#include<cstring>
using namespace std;

class Student{
  int age;
  char *name;

  public:
    Student(int age,char *name){

        // Shallow Copy
        // this -> name = name;

        
        // Deep Copy
        this -> age = age;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name,name);
    }  

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){

    char name[] = "Ravi";

    Student s1(20,name);
    s1.display();

    name[3] = 'y';
    Student s2(22,name);
    s2.display();

    s1.display();
}
