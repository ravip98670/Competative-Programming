#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
    int bin,r,dec=0;
    cin>>bin;
    int i=0;
    while(bin!=0)
    {
        r=bin%10;
        dec=dec+(r*pow(2,i));
        bin=bin/10;
        i++;
    }
    cout<<dec;

 }