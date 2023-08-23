#include<iostream>
#include<climits>
using namespace std;
template <typename V>
class StackUsingTemplates{
    V *data;
    int nextIndex;
    int capacity;

    public:
    StackUsingTemplates(){
        data  = new V[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(V n){
        if(nextIndex == capacity){ 
            V *newData = new V[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i] = data[i];
            } 
            capacity *= 2;
            delete []data;
            data = newData;
           
        }
        else{
            data[nextIndex] = n;
            nextIndex++;
        }
    }

    V  pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else{
            nextIndex--;
            return data[nextIndex];
        }
    }

    V top(){
        return data[nextIndex-1];
    }

};

int main(){
    StackUsingTemplates<char> s;

    s.push(100);
    s.push(101);
    s.push(103);
    s.push(104);
    s.push(105);
    s.push(106);
    
    cout<<s.top()<<endl;
    cout<<"Size = "<<s.size()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    

    cout<<s.isEmpty()<<endl;

}