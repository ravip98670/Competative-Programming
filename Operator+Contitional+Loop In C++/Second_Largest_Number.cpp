#include<iostream>
using namespace std;
#include <climits>



int main(){
    
    // Write your code here
    int n;
    cin>>n;
    
    if(n==0||n==1){
        cout<<INT_MIN;
        
    }else{
        
    int max=INT_MIN;
    int max2=max;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k>max){
            max2=max;
            max=k;
        }else if(k<max&&k>max2){
            max2=k;
        }
    }
    cout<<max2;
    }
    
}


