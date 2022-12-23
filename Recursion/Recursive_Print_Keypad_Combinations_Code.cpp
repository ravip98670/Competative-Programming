#include <iostream>
#include <string>
#include <iostream>
#include <string>
using namespace std;

void printKeypad1(int num,string key[],string output){
    if(num == 0){
        cout<<output<<endl;
        return;
    }
    int currdigit=num/10;
    int last=num%10;

    for(int i=0;i<key[last][i] != '\0';i++){
        string newoutput=key[last][i]+output;
        printKeypad1(currdigit,key,newoutput);
    }
   
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string key[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output="";
    printKeypad1(num,key,output);
}

using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
