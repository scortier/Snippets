//Author: Aditya Singh Sisodiya (Scortier)
/*
1. find left tree node till leaves
2. find leaves separately first for left then right
3. find right tree node till root;
*/
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

Node *newNode(int x)
{
	Node* temp = new Node;
	temp->left = temp->right = NULL;
	temp->data = x;
	return temp;
}

void print_leave(Node* root)
{
	if (root == NULL) return;
	print_leave(root->left);

	if (!(root->left) and (root->right))
		cout << root->data;

	print_leave(root->right);
}

void print_boundleft(Node* root)
{
	if (root == NULL) return;

	if (root->left)
	{
		cout << root->data;
		print_boundleft(root->left);
	}
	else if (root->right) //sometimes root doesnt have left child
	{
		cout << root->data;
		print_boundleft(root->right);
	}
}

void print_boundright(Node* root)
{
	if (root == NULL) return;
	if (root->right)
	{
		cout << root->data;
		print_boundright(root->right);

	}
	else if (root->left)
	{
		cout << root->data;
		print_boundright(root->left);
	}
}
void printboundary(Node* root)
{
	if (root == NULL) return;

	cout << root > data;
	print_boundleft(Node * root->left);
	print_leave(Node * root->left);
	print_leave(Node * root->right);
	print_boundright(Node * root->right);
}


int32_t main()
{

	return 0;
}