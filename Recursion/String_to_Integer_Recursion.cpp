#include <iostream>
#include<cmath>
#include<cstring>
int stringToNumber(char input[]) {
    // Write your code here
	int size=strlen(input);
	if(input[0]=='\0')
		return 0;
	return (input[0]-48)*pow(10,size-1) + stringToNumber(input+1);
}

using namespace std;

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
