#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.size() <= 1)
        return;
    
    int lastEle = input.top();
    input.pop();

    reverseStack(input,extra);

    while(!input.empty()){
        int top = input.top();
        input.pop();
        extra.push(top);
    }

    input.push(lastEle);

    while(!extra.empty()){
        int top = extra.top();
        extra.pop();
        input.push(top);
    }
}

int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}