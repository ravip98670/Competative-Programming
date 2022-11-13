#include<iostream>
using namespace std;
 int main()
 {
    int N,rev=0,r;
    cin>>N;

    while(N!=0)
    {
       r=N%10;
       rev=rev*10+r;
       N=N/10;
    }
    cout<<rev;
 }