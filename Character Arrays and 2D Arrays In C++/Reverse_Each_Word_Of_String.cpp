#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[]) {
    // Write your code here
    
    int size=strlen(input);
	int k=0,j,i;
    for(i=0;i<size+1;i++){
        if(input[i]==' ' || input[i]=='\0'){
            j=i-1;
            while(k<j){
       	    int temp=input[k];
            input[k]=input[j];
            input[j]=temp;
            k++;
            j--;
            }
            k=i+1;
        }
    }
        
    
}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}