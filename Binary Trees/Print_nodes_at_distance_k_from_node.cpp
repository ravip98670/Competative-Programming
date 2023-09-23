#include <iostream>
#include <queue>

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

    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
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
BinaryTreeNode<int>* getTargetNode(BinaryTreeNode<int>* root,int node){
        if(root == NULL)
          return NULL;
        
        if(root->data == node){
                return root;
        }
        BinaryTreeNode<int>* leftResult = getTargetNode(root->left, node);
        BinaryTreeNode<int>* rightResult = getTargetNode(root->right, node);

        return (leftResult != NULL) ? leftResult : rightResult;
}

void makeParent(BinaryTreeNode<int>* root,map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> &pTrack){
        queue<BinaryTreeNode<int>*> q;
        q.push(root);
        while(!q.empty()){
                BinaryTreeNode<int>* curr = q.front();
                q.pop();

                if(curr->left){
                        q.push(curr->left);
                        pTrack[curr->left] = curr;
                }
                if(curr->right){
                        q.push(curr->right);
                        pTrack[curr->right] = curr;
                }
        }
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code here
    map<BinaryTreeNode<int>* ,BinaryTreeNode<int>* > pTrack;
    makeParent(root,pTrack);

    BinaryTreeNode<int>* target = getTargetNode(root,node);
    map<BinaryTreeNode<int>* ,bool> visited;
    queue<BinaryTreeNode<int>*> q;
    q.push(target);
    visited[target] = true;
    int dis = 0;

    while(!q.empty()){
            int size = q.size();

            if(dis++  == k){
                while (!q.empty()) {
                BinaryTreeNode<int>* curr = q.front();
                q.pop();
                cout << curr->data <<endl;
                }
                return;
            }

           
            for(int i=0;i<size;i++){
                BinaryTreeNode<int>* curr = q.front();
                q.pop();

                if(curr->left && !visited[curr->left]){
                        q.push(curr->left);
                        visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right]){
                        q.push(curr->right);
                        visited[curr->right] = true;
                }
                if (pTrack[curr] && !visited[pTrack[curr]]) {
                        q.push(pTrack[curr]);
                        visited[pTrack[curr]] = true;
                }
            }
    }
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int targetNode, k;
    cin >> targetNode >> k;
    nodesAtDistanceK(root, targetNode, k);
    delete root;
}       