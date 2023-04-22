#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    int rollNumber;

    Student(int a,int r){
        this->age = a;
        this->rollNumber = r;
        cout<<"Constructor Called!"<<endl;
    }
    ~Student(){
        cout<<"Destructor Called!"<<endl;
    }
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
};

int main(){

    Student s1(10,1001);
    s1.display();
    Student s2(20,2001);
    s2.display();

    Student *s3 = new Student(30,3001);
    s3->display();
    delete s3;

}
