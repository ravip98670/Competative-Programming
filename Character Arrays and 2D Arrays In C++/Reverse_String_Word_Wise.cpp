#include <iostream>
void reverseStringWordWise(char input[]) {
    // Write your code here
    int size=0;
    for(int i=0;input[i]!='\0';i++){
        size++;
    }
    
    int i=0; 
    int j=size-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int k=0;
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
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
