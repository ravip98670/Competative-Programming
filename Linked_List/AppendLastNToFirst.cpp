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
Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
	if(head == NULL || head->next == NULL || n == 0)
		return head;
	Node *temp = head;
	int size = 0;
	while(temp != NULL){
		size++;
		temp = temp->next;
	}

	size = size - n;
	int t=0;
	temp = head;
	Node *newHead = head;
	Node *tail = head;
	while(size != 0){
		if(size == 1)
			tail = newHead;
		newHead = newHead->next;
		size--;
	}
	temp = newHead;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = head;
	tail->next = NULL;
	head = newHead;
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
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}