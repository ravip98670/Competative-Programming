#include<iostream>
using namespace std;
 int main()
 {
    int X,i=1,term,N;
    cin>>X;

    N=1;
    while(N<=X)
    {
        term=(3*i)+2;
        if(term%4!=0){
          cout<<term<<" ";
           N++;
        }
        i++;   
    }

 }