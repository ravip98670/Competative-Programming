//bubble sort iterative
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
Node *bubbleSort(Node *head)
{
	// Write your code here
	Node *temp1 = head;
	Node *temp2 = head;
	while(temp1 != NULL){
		temp2 = temp1->next;
		while(temp2 != NULL){
			if(temp1->data > temp2->data){
				int val = temp1->data;
				temp1->data = temp2->data;
				temp2->data = val;
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
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
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}