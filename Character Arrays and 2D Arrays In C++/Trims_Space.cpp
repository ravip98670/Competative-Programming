#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    int len=0;
    int i,j=0;
    for(i=0;input[i]!='\0';i++){
        len++;
    }
    
    for(i=0;i<len;i++){
        if(input[i]!=' '){
            input[j++]=input[i];
        }
    }
    
    while(j<=len){
        input[j++]='\0';
    }
    
}

int main() {
    char input[1000000];
    cin.getline(input,1000000);
    trimSpaces(input);
    cout << input << endl;
}

