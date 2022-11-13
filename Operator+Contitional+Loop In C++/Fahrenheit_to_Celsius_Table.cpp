#include<iostream>
using namespace std;


int main(){

  int S,E,W;
    cout<<"Enter the Start,End and Step Size:";
    cin>>S>>E>>W;
    cout<<"Table Is:"<<endl;
    while(E>=S)
    {
        cout<<S<<" "<<((S-32)*5)/9<<endl;
        S=S+W;
    }
}


