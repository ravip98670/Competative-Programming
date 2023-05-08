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
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head == NULL)
		return NULL;




	
	int len = 0;
	Node *temp = head;

	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	if(len<pos){
		return head;
	}
	len=0;
	temp=head;
	if(pos == 0){
		head = temp->next;
		// delete temp;
		return head;
	}
	while(temp != NULL){
		if(len == pos-1)
			break;
		len++;
		temp = temp->next;
	}

	if(temp->next != NULL){
		Node *tmp = temp->next->next;
		// delete temp->next;
		temp->next = tmp;
		return head;
	}else{
		temp->next = NULL;
		return head;
	}
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}