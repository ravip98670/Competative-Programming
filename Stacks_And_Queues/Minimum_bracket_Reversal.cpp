#include <iostream>
#include <string>
using namespace std;

#include <stack>
int countBracketReversals(string input) {
	// Write your code here
	if(input.size()%2 != 0)
		return -1;
	stack<int> st;
	for(char c:input){
		if(c == '{')
			st.push(c);
		else{
			if(st.empty())
				st.push(c);
			else if(!st.empty() && st.top() == '{')
				st.pop();
			else if(!st.empty() && st.top() != '{')
				st.push(c);
		}
	}
	int count  = 0;
	while(!st.empty()){
		char c1 = st.top();
		st.pop();
		char c2 = st.top();
		st.pop();
		if(c1 ==  c2) 
			count += 1;
		else
			count += 2;
	}
	return count;
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}