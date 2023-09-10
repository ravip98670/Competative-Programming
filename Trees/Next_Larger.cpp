#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

/* (1) Approach using stack
#include <stack>
stack<TreeNode<int>*> st;
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(st.size() == 0 && root->data > x){
        st.push(root);
    }
    else if(!st.empty()){
        TreeNode<int>* temp = st.top();
        if (root->data > x && root->data < temp->data) {
          st.pop();
          st.push(root);
        }
    }
    for(int i=0;i<root->children.size();i++){
        getNextLargerElement(root->children[i],x);
    }
    if(!st.empty())
        return st.top();
    else return NULL;
}
*/

// (2) Approach 
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root == NULL)
        return root;
    
    TreeNode<int>* nextL = NULL;

    if(root->data > x)
        nextL = root;

    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* temp = getNextLargerElement(root->children[i], x);
        if(nextL == NULL)
            nextL = temp;
        else if(temp != NULL && temp->data < nextL->data)
            nextL = temp;
    }
    return nextL;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    int x;
    cin >> x;
    TreeNode<int>* ans = getNextLargerElement(root, x);

    if (ans != NULL) {
        cout << ans->data;
    }
}