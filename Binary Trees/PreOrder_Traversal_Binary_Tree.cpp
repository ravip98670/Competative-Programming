#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;

template <typename T = int>
class TreeNode
{
public:
	T data;
	TreeNode<T> *left;
	TreeNode<T> *right;

	TreeNode(T data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}

	~TreeNode()
	{
		if (left != NULL)
		{
			delete left;
		}
		if (right != NULL)
		{
			delete right;
		}
	}
};

#include <stack>
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> pre;

    stack<TreeNode<int>*> st;
    st.push(root);

    while(!st.empty()){
        TreeNode<int>* top = st.top();
        st.pop();

        pre.push_back(top->data);

        if(top->right != NULL)
            st.push(top->right);
        if(top->left != NULL)
            st.push(top->left);
        
    }
    return pre;
}

class Runner
{
	int t;
	vector<TreeNode<int> *> allTrees;

	TreeNode<int> *takeTreeInput()
	{

		int rootData;
		cin >> rootData;

		if (rootData == -1)
		{
			return NULL;
		}

		TreeNode<int> *root = new TreeNode<int>(rootData);

		queue<TreeNode<int> *> q;
		q.push(root);

		while (q.empty() == false)
		{
			TreeNode<int> *currentNode = q.front();
			q.pop();
			int leftChild, rightChild;

			cin >> leftChild;

			if (leftChild != -1)
			{
				TreeNode<int> *leftNode = new TreeNode<int>(leftChild);

				currentNode->left = leftNode;
				q.push(leftNode);
			}

			cin >> rightChild;

			if (rightChild != -1)
			{
				TreeNode<int> *rightNode = new TreeNode<int>(rightChild);

				currentNode->right = rightNode;
				q.push(rightNode);
			}
		}

		return root;
	}

	TreeNode<int> *copyTree(TreeNode<int> *root)
	{
		if (root == NULL)
		{
			return NULL;
		}
		TreeNode<int> *copyRoot = new TreeNode<int>(root->data);
		copyRoot->left = copyTree(root->left);
		copyRoot->right = copyTree(root->right);
		return copyRoot;
	}

public:
	void takeInput()
	{
		t = 1;
		allTrees.resize(t);

		for (int i = 0; i < t; i++)
		{
			allTrees[i] = takeTreeInput();
		}
	}

	void execute()
	{
		for (int i = 0; i < t; i++)
		{
			TreeNode<int> *copyRoot = copyTree(allTrees[i]);

			vector<int> ans = preOrder(copyRoot);

			delete copyRoot;
		}
	}

	void executeAndPrintOutput()
	{
		for (int i = 0; i < t; i++)
		{

			vector<int> ans = preOrder(allTrees[i]);
			for (auto i : ans)
				cout << i << " ";
			cout << '\n';
		}
	}
};

int main()
{
#ifndef ONLINE_JUDGE
	// freopen("testcases/large/in/input11.txt", "r", stdin);
	// freopen("output11.txt", "w", stdout);
#endif
	Runner runner;
	runner.takeInput();
	runner.executeAndPrintOutput();
	return 0;
}
