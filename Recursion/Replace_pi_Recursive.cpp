#include <iostream>
// Change in the given string itself. So no need to return or print anything
#include<cstring>
void replacePi(char input[]) {
	// Write your code here
	if(input[0] == '\0')
		return;

	if(input[0]=='p' && input[1]=='i'){
		int size=strlen(input);
		int i;
		for(i=size;i>0;i--){
			input[i+2]=input[i];
		}
		input[i]='3';
		input[i+1]='.';
		input[i+2]='1';
		input[i+3]='4';
		return replacePi(input +2);
		}
		else
			return replacePi(input+1);
	}
	




using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    replacePi(input);
    cout << input << endl;
}
