#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    
	int temp[256]={0};
    
    for(int i=0;input1[i]!='\0';i++){
        temp[input1[i]]++;
    }
    
    for(int i=0;input2[i]!='\0';i++){
        temp[input2[i]]--;
    }
    
    for(int i=0;input1[i]!='\0';i++){
        if(temp[input1[i]]!=0){
            return false;
        }
    }
    return true;
    
    
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}