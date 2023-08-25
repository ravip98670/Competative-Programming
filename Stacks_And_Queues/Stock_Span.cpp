
#include <iostream>
#include <stack>
using namespace std;

#include <stack>
void calculateSpan(int prices[], int n, int spans[]) {
    //Write your code here
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++){
        int span  = 1;
        while(!st.empty() && st.top().first < prices[i]){
            span += st.top().second;
            st.pop();
        }
        st.push({prices[i],span});
        spans[i] = span;
    }
   
       
    
}

int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}