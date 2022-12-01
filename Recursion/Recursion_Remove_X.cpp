#include <iostream>
// Change in the given string itself. So no need to return or print anything
#include<cstring>
void removeX(char input[]) {
    // Write your code here
	if(input[0]=='\0')
		return;

	if(input[0]=='x'){
		int size=strlen(input);
		for(int i=0;i<size;i++){
			input[i]=input[i+1];
		}
		return removeX(input);
	}
	else
    	return removeX(input + 1);
}

using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
