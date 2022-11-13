#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int N;
    cin>>N;
    
    int fst,sec,fibbo=0,temp,i;
    fst=1;
    sec=1;
    fibbo=fst+sec;
    if(N==1)
        cout<<"1";
    else if(N==2)
        cout<<"1";
    else{
        i=3;
     	while(i<=N){
        fibbo=fst+sec;
		fst=sec;
        sec=fibbo;
        i++;
        }
        cout<<fibbo;
    }
    
}