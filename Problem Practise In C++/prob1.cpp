#include <iostream>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int nRows=n;
	int nCols=n;
	 int rows=0,rowl=nRows-1;
    int cols=0,coll=nCols-1;
    
    int len=nRows*nCols;
    int count=0;
    
    while(count<=len){
        for(int i=cols;i<=coll;i++){
            cout<<n<<" ";
            count++;
            
        }
        if(count>=len){
            break;
        }
        rows++;
        for(int i=rows;i<=rowl;i++){
            cout<<n<<" ";
            count++;
        }
        if(count>=len){
            break;
        }
        coll--;
        for(int i=coll;i>= cols;i--){
            cout<<n<<" ";
            count++;
        }
        if(count>=len){
            break;
        }
        rowl--;
        for(int i=rowl;i>=rows;i--){
            cout<<n<<" ";
            count++;
        }
        cols++;

		n=n-1;
    }
	return 0;
}