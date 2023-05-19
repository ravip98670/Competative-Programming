#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
Node *tail = NULL;
bool helper(Node *head){
	if(head == NULL)
		return true;
	bool ans=helper(head->next);
	if(tail->data != head->data){
		return false;
	}
	tail = tail->next;
	return ans && true;
}
bool isPalindrome(Node *head)
{
    //Write your code here
	if(head == NULL || head->next == NULL)
		return true;
	tail = head;
	return helper(head);
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}