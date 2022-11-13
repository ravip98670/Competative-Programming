#include<iostream>
using namespace std;

int main(){
       int N,i=1,j=1;
    cin>>N;
    while(i<=N){
        j=1;
        while(j<=i){
            char c='A'+N+j-i-1;
            cout<<c;
            j++;
        }
        i++;
        cout<<endl;
    }
}

