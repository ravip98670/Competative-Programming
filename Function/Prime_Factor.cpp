// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n){
    for(int i=2;n>1;i++){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    primeFactors(n);
    return 0;
}
 
