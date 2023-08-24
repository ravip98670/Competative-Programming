#include <iostream>
#include <string>
using namespace std;

#include<stack>
bool isBalanced(string expression) {
  // Write your code here
    if (expression[0] == ')' || expression[0] == '}' || expression[0] == ']')
        return false;
    if(expression[expression.size()-1] == '(' || expression[expression.size()-1] == '{' || expression[expression.size()-1] == '[')
        return false;
    stack<char> st;
    for(int i=0;i<expression.size();i++){
        if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
            st.push(expression[i]);
        else if(!st.empty() && st.top() == '(' && expression[i] == ')')
             st.pop();
        else if (!st.empty() && st.top() == '{' && expression[i] == '}')
            st.pop();
        else if (!st.empty() && st.top() == '[' && expression[i] == ']')
            st.pop();
        else 
            return false;
    }
    if(!st.empty()) return false;
    return true;
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}