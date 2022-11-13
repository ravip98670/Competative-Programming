#include<iostream>
using namespace std;


int main(){

    int N,sum=0;
    cout<<"Enter the Number:";
    cin>>N;
    while(N>0)
    {
        if(N%2==0)
        {
            sum=sum+N;
            N=N-2;
        }
        else
            N=N-1;
        
    }
    cout<<"Sum of Even Number="<<sum;
      
  
}