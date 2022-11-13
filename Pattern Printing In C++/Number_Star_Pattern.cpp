#include<iostream>
using namespace std;


int main(){

  // Write your code here
int N;
int i,j,k;
cin>>N;

for(i=1;i<=N;i++){
    for(j=1;j<=N;j++){
        if(j<=N+1-i)
          cout<<j;
        else
          cout<<"*";
    }
    for(j=N;j>=1;j--){
        if(j<=N+1-i)
          cout<<j;
        else
          cout<<"*";
    }
    cout<<endl;
}
}

