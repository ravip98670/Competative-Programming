#include <iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
       
    if(input[0] == '\0')
	  	return;
	if(input[0] != input[1])
		return removeConsecutiveDuplicates(input+1);
	else{
		int i=0;
		for(;i<input[i]!='\0';i++){
			input[i]=input[i+1];
		}
		input[i]=input[i+1];
		return removeConsecutiveDuplicates(input);
	}
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}