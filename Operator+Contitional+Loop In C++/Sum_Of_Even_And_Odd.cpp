#include<iostream>
using namespace std;

int main() {
	int N,d,evenSum=0,oddSum=0;
    cout<<"Enter the number:";
    cin>>N;
    
    while(N>0){
    	d=N%10;
        N=N/10;
        if(d%2==0)
            evenSum=evenSum+d;
        else
            oddSum=oddSum+d;
    }
    cout<<evenSum<<" "<<oddSum<<endl;

}