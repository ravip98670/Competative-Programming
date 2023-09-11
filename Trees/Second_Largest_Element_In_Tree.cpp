#include <iostream>
#include <queue>
#include <vector>
#include <climits>
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
#include <queue>
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    // Write your code here
    if(root == NULL)
        return NULL;

    TreeNode<int>* max = NULL;
    TreeNode<int>* smax = NULL;

    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int> *curr = q.front();
        q.pop();

        if(max == NULL || curr->data > max->data){
            smax = max;
            max = curr;
                   //like this,,
                   
        }else if((smax == NULL ||  curr->data > smax->data) && curr->data < max->data ) {
            smax = curr;
        }

        for(int i=0;i<curr->children.size();i++){
            q.push(curr->children[i]);
        }
    }
    if(smax == NULL){
        return NULL;
    }
     return smax;
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

    TreeNode<int>* ans = getSecondLargestNode(root);

    if (ans != NULL) {
        cout << ans->data;
    } else {
        cout << INT_MIN;
    }

}