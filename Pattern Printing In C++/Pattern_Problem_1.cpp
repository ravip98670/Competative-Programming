#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    
    int i=1;
    int val;
    while(i<=n)
    {
        val=i;
        int j=1;
        while(j<=i)
        {
            
            cout<<val;
            val=val+1;
            j=j+1;
        }
         i=i+1;
        cout<<endl;
    }
  
   
}


