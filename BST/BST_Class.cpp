#include <iostream>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/

class BST {
    // Define the data members
    BinaryTreeNode<int>* root;
   public:
    BST() { 
        // Implement the Constructor
        root == NULL;
    }
    ~BST(){
        delete root;
    }
	/*----------------- Public Functions of BST -----------------*/
    private:
    BinaryTreeNode<int>* removeHelper(int data,BinaryTreeNode<int>* node){
        if(node == NULL)
            return NULL;

        if (data < node->data) {
            node->left = removeHelper(data, node->left);
            return node;
        } else if (data > node->data) {
            node->right = removeHelper(data, node->right);
            return node;
        } else {
            if (node->left == NULL && node->right == NULL) {
              delete node;
              return NULL;
            } else if (node->left == NULL) {
              BinaryTreeNode<int>* temp = node->right;
              node->right = NULL;
              delete node;  
              return temp;
            } else if (node->right == NULL) {
              BinaryTreeNode<int>* temp = node->left;
              node->left = NULL;
              delete node;  
              return temp;
            } else {
              BinaryTreeNode<int>* minNode = node->right;
              while(minNode->left != NULL){
                  minNode = minNode->left;
              }
              int rightMin = minNode->data;
              node->data = rightMin;
              node->right = removeHelper(rightMin,node->right);
              return node;
            }
        }
    }
    void printHelper(BinaryTreeNode<int>* node){
        if(node == NULL)
            return;

        cout<<node->data<<":";
        if (node->left != NULL) {
            cout << "L:" << node->left->data<<",";
        }
        if(node->right != NULL)
            cout<<"R:"<<node->right->data;
        cout<<endl;

        printHelper(node->left);
        printHelper(node->right);
    }




    public:
    void remove(int data) { 
        // Implement the remove() function 
        root = removeHelper(data,root);
    }

    void print() { 
        // Implement the print() function
        printHelper(this->root);
    }
    private:
    BinaryTreeNode<int>* insertHepler(int data, BinaryTreeNode<int>* node){
        if(node == NULL){
            BinaryTreeNode<int>* temp = new BinaryTreeNode<int> (data);
            return temp;
        }
           
        if(node->data >= data){
            node->left = insertHepler(data,node->left);
        }else node->right  = insertHepler(data,node->right);
        return node;
    }
    public:
    void insert(int data) { 
        // Implement the insert() function 
        this->root = insertHepler(data,root);
    }

    private:
    bool searchHelper(int data,BinaryTreeNode<int>* root){
        if(root == NULL)
            return false;
        if(root->data == data){
            return true;
        }else if(root->data > data)
            return searchHelper(data,root->left);
        else return searchHelper(data,root->right);
    }

    public:
    bool search(int data) {
		// Implement the search() function
        return searchHelper(data,root); 
    }
};






int main() {
    BST *tree = new BST();
    int choice, input, q;
    cin >> q;
    while (q--) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                tree->insert(input);
                break;
            case 2:
                cin >> input;
                tree->remove(input);
                break;
            case 3:
                cin >> input;
                cout << ((tree->search(input)) ? "true\n" : "false\n");
                break;
            default:
                tree->print();
                break;
        }
    }
}