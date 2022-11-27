#include<iostream>
using namespace std;

double power(double m,double n){
    if(n==0)
        return 1;
    else if(n<0)
        return (1/m)*power(m,n+1);
    else   
        return m*power(m,n-1);
}

int main(){
    int m,n;
    cin>>m>>n;

    double ans=power(m,n);
    cout<<ans<<endl;
}