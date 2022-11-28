#include <iostream>
#include<cstring>
bool checkvalid(char input[],int str,int len){
    if(str>=len){
        return true;
    }
    else{
        if(input[str]!=input[len])
              return false;
    } 
    checkvalid(input,str+1,len-1);
   

}
bool checkPalindrome(char input[]) {
    // Write your code here
    int len = strlen(input);
    bool ans=checkvalid(input,0,len-1);
    return ans;
}

using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
