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
    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

using namespace std;
#include <bits/stdc++.h>
class IsLargestBST{
	public:
	int maxN;
	int minN;
	bool isBST;
	int maxHeight; 
};

IsLargestBST helper(BinaryTreeNode<int> *root){
	if(root == NULL){
		IsLargestBST output;
		output.maxN = INT_MIN;
		output.minN = INT_MAX;
		output.isBST = true;
		output.maxHeight = 0;
		return output;
	}

	IsLargestBST leftOutput = helper(root->left);
	IsLargestBST rightOutput = helper(root->right);

	int maximum = max(root->data,max(leftOutput.maxN,rightOutput.maxN));
	int minimum = min(root->data,min(leftOutput.minN,rightOutput.minN));
	bool isBSTFinal = (root->data > leftOutput.maxN) && (root->data < rightOutput.minN) && leftOutput.isBST && rightOutput.isBST;
	int height;
	if(!isBSTFinal)
		height = max(leftOutput.maxHeight,rightOutput.maxHeight);
	else height = max(leftOutput.maxHeight,rightOutput.maxHeight)+1;


	IsLargestBST output;
	output.maxN = maximum;
	output.minN = minimum;
	output.isBST = isBSTFinal;
	output.maxHeight = height;

	return output;
}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here

	IsLargestBST output = helper(root);
	return output.maxHeight;
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
    cout << largestBSTSubtree(root);
    delete root;
}