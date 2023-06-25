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
Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
	if(i == j) return head;

	Node *curr = head , *prev = NULL;
	Node *p1 = NULL , *p2 = NULL;
	Node *c1 = NULL , *c2 = NULL;
	int pos = 0;

	while(curr != NULL){
		if(pos == i){
			p1 = prev;
			c1 = curr;
		}else if(pos == j){
			p2 = prev;
			c2 = curr;
		}
		prev = curr;
		curr = curr->next;
		pos++;
	}

	if(p1 != NULL) p1->next = c2;
	else head = c2;

	if(p2 != NULL) p2->next = c1;
	else head = c1;

	Node *temp = c2->next;
	c2->next = c1->next;
	c1->next = temp;
	return head; 
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

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}