#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include <bits/stdc++.h>
vector<int> preOrder(BinaryTreeNode<int> * root){
    vector<int> output;
    stack<BinaryTreeNode<int>*> st;
    st.push(root);

    while(!st.empty()){
        BinaryTreeNode<int>* top = st.top();
        st.pop();
		output.push_back(top->data);

        if(top->right != NULL)
            st.push(top->right);
        if(top->left != NULL)
            st.push(top->left);    
    }
    return output;
}
void pairSum(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
	vector<int> temp = preOrder(root);

	sort(temp.begin(),temp.end());
	int i = 0,j = temp.size()-1;

	while(i < j){
		if(temp[i]+temp[j] == sum){
			cout<<temp[i]<<" "<<temp[j]<<endl;
			i++;
			j--;
		}else if(temp[i]+temp[j] > sum){
			j--;
		}else i++;
	}
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}