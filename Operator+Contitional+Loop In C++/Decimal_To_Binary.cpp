#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
    int dec,r,bin=0;
    cin>>dec;
    int i=1;
    int cat=0;
    while(dec>0)
    {
        r=dec%2;
        bin=bin+r*i;
        i=i*10;
        dec=dec/2;
        
    }
    cout<<bin;

 }