#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){

    //Creating objects statically
    Student s1;
    Student s2,s3,s4;

    s1.age = 24;
    s1.rollNumber = 101;

    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;

    //Creating objects dynamically
    Student *s6 = new Student;
    

    (*s6).age = 26;
    (*s6).rollNumber = 101;

    s6 -> age = 26;
    s6 -> rollNumber = 104;


}
