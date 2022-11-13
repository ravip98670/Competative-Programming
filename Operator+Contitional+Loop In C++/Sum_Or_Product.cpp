#include<iostream>
using namespace std;
 int main()
 {
    int N,C,i=1,sum=0,pro=1;
    cin>>N>>C;

    if(C==1)
    {
       while(i<=N){
        sum=sum+i;
        i++;
       }
       cout<<sum;  
    }
    else if(C==2)
    {
       while(i<=N){
        pro=pro*i;
        i++;
       }
       cout<<pro;  
    }
    else
        cout<<"-1";
    
 }