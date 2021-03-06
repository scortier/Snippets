/*Time Complexity: O(n)
Space Complexity: O(1)*/
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node *newNode(int x)
{
	Node* temp = new Node;
	temp->data = x;
	return temp;
}

/* Link list node
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};*/

struct LinkedList {
	Node* head;
	LinkedList() {
		head = NULL;
	}

	void reverse(Node* head, int k)
	{
		Node *curr = head;
		int cnt = 0;
		Node *prev = NULL, *next = NULL;
		while (curr != NULL and cnt < k)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
			cnt++;
		}
		head = prev;
	}

	void print(Node *temp)
	{
		// struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = newNode(data);
		temp->next = head;
		head = temp;
	}
};


int main() {
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print(head);

	ll.reverse();

	cout << "\nReversed Linked list \n";
	ll.print();
	return 0;
}