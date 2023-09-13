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
pair<int,bool> isBalancedHelper(BinaryTreeNode<int>* root){

	if(root == NULL){
		pair<int,bool> ans;
		ans.first = 0;
		ans.second = true;
		return ans;
	}

	pair<int,bool> left = isBalancedHelper(root->left);
	pair<int,bool> right = isBalancedHelper(root->right);

	pair<int,bool> ans;
	ans.first = max(left.first,right.first) + 1;
	if(!left.second || !right.second)
		ans.second = false;
	else if(abs(left.first - right.first) <= 1){
		ans.second = true;
	}
	return ans;
}
bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
	pair<int,bool> ans = isBalancedHelper(root);
	return ans.second;
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
    cout << (isBalanced(root) ? "true" : "false");
}