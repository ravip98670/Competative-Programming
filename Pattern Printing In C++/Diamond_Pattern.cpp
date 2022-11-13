#include<iostream>
using namespace std;


int main() {
    
    
    int i,j,k,l,m,n;
    int r1,r2;
    int N;
    cin>>N;
    
    r1=(N/2)+1;
    i=1;
    while(i<=r1)
    {
        j=1;
        while(j<=r1-i)
        {
            cout<<" ";
            j++;
        }
        k=1;
        while(k<=2*i-1)
        {
            cout<<"*";
            k++;
        }
        i++;
        cout<<endl;
    }
    r2=N-r1;
    l=r2;
    while(l>=1)
    {
        m=1;
        while(m<=r2-l+1)
        {
            cout<<" ";
            m++;
        }
        n=1;
        while(n<=2*l-1)
        {
          cout<<"*";
          n++;
        }
        l--;
        cout<<endl;
    }    
}