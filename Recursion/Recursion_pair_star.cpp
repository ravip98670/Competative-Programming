#include <iostream>
// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void pairStar(char input[]) {
    // Write your code here
	int size=strlen(input);
	if(input[0]=='\0')
		return;

	if(input[0]==input[1]){
		int i;
		for(i=size;i>0;i--){
			input[i+1]=input[i];
		}
		input[i+1]='*';
	}
	return pairStar(input+1);

}

using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
