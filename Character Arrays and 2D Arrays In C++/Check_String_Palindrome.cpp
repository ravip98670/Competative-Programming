#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
    int len=0;
    for(int i=0;str[i]!='\0';i++ ){
        len++;
    }
    
    int i=0, j=len-1;
    while(i<j){
        if(str[j]==str[i]){
             i++;
            j--;
            
        }     
        else
            return false;
    }
    return true;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}