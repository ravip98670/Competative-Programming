#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int i,k=0;
    int len=strlen(input);
    for(i=0;i<len;i++){
     	if(input[i]!=c){
            input[k]=input[i];
            k++;
        }
    }
    input[k]='\0';
}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}