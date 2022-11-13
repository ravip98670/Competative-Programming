#include<iostream>
using namespace std;
#include<cmath>

int main() 
{
	long long p,n,rst=1;
    cout<<"Enter the base and power:";
    cin>>p>>n;
    if(p==0&&n==0)
         cout<<"1";
    else{
    
          // rst=pow(p,n);            
            for(int i=1;i<=n;i++){
                rst=rst*p;                
            }
                cout<<rst;
            }           
        
           
}

