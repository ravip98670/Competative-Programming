#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    
    for(int i=0;input[i]!='\0';i++){
        int count=i+1;
        int pos=0;
        while(input[count]==input[i]){
            count++;
            pos++;
        }
        for(int j=i+1;input[j]!='\0';j++){
            input[j]=input[j+pos];
        }
    }
        
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}