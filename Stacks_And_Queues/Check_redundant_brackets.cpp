#include <iostream>
#include <string>
using namespace std;

#include <stack>
bool checkRedundantBrackets(string expression) {
	// Write your code here
	stack<char> st;

	for(int i=0;i<expression.size();i++){
		if(expression[i] != ')'){
			st.push(expression[i]);
		}else{
			int count = 0;
			while(!st.empty() && st.top() != '('){
				count++;
				st.pop();
			}
				
			if(count <= 1)
				return true;
			st.pop();
		}
	}
	return false;
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}