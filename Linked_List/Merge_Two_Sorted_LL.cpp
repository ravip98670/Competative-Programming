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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
	if(head1 == NULL && head2 == NULL)
		return NULL;
	
	if(head1 != NULL && head2 == NULL)
		return head1;
	if(head1 == NULL && head2 != NULL)
		return head2;

	Node *startLL = NULL;
	Node *endLL = NULL;

	while(head1 != NULL && head2 != NULL){

		if(head1->data <= head2->data){
			if(startLL == NULL && endLL == NULL){
				startLL = head1;
				endLL = head1;
			}else{
				endLL->next = head1;
				endLL = endLL->next;
			}
			head1 = head1->next;
		}
		else{
			if(startLL == NULL && endLL == NULL){
				startLL = head2;
				endLL = head2;
			} else {
				endLL->next = head2;
				endLL = endLL->next;
			}
            head2 = head2->next;
        }
    }

    if(head1 != NULL){
	endLL->next = head1;
	}

	if(head2 != NULL){
		endLL->next = head2;
	}
	
	return startLL;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}