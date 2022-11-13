#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N;
    int i=1,prev,curr;
    cin>>N;
    bool isDec=true;
    
    cin>>prev;
    while(i<=N-1){
        cin>>curr;
        if(curr>prev){
             isDec=false;
             prev=curr;
        }
        else  if(curr<prev){
            if(isDec==false){
                cout<<"false";
                return 0;
            }
            prev=curr;
        }
        else{
            cout<<"false";
            return 0;
        }
        i++;
        }
    cout<<"true";
        
}
