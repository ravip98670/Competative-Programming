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
Node *evenAfterOdd(Node *head)
{
	//write your code here
	if(head == NULL || head->next == NULL) return head;
	Node *oddH = NULL;
	Node *oddT = NULL;
	Node *evenH = NULL;
	Node *evenT = NULL;
	Node *temp = head;

	while(temp != NULL){
		if(temp->data%2 != 0){
			if(oddH ==  NULL && oddT == NULL){
				oddH = temp;
				oddT = temp;
			}else{
				oddT->next = temp;
				oddT = oddT->next;
			}
		}else{
			if(evenH ==  NULL && evenT == NULL){
				evenH = temp;
				evenT = temp;
			}else{
				evenT->next = temp;
				evenT = evenT->next;
			}
		}
		temp = temp->next;
	}

        if (oddH == NULL) {
		  evenT->next = NULL;
          return evenH;
        }else if(evenH ==  NULL){
			oddT->next = NULL;
			return oddH;
		}
		evenT->next = NULL;
		oddT->next = evenH;
		return oddH;
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
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}