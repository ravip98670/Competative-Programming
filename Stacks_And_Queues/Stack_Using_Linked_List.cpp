#include <iostream>
using namespace std;

template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};
/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/

template <typename T>
class Stack {
	// Define the data members
    Node<T> *head;
    int size;

   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size == 0;
    }

    void push(T element) {
        // Implement the push() function
        Node<T> *newNode = new Node<T>(element);
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    T pop() {
        // Implement the pop() function
        if(head == NULL)
            return -1;
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top() {
        // Implement the top() function
        if(head == NULL)
            return -1;
        return head->data;
    }
};

int main() {
    Stack<int> st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}