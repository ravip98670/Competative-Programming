#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here
    int temp[256]={0};
    for(int i=0;input[i]!='\0';i++){
        temp[input[i]]++;
        
    }
   
    int max=temp[input[0]];
    int ind=input[0];
    for(int i=0;input[i]!='\0';i++){
        if(max<temp[input[i]]){
            max=temp[input[i]];
           ind=input[i];
        }
    }
                 char ans=ind;
         return ans;
}

int main() {
    int size = 100;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}