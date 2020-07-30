// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define fl(i,a,b)       for( int i=a;i<b;i++)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];


void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********============########################============***********/
class node {
public:
	int data;
	node *left, *right;
	node(int x)
	{
		data = x;
		left = right = NULL;
	}
};

// O(N) AND SC:O(1)
int CheckBST(node *root, int min, int max)
{
	if (root == NULL) return 1;

	if (root->data < min or root->data > max) return 0;

	return
	    CheckBST(root->left, min, root->data - 1) and
	    CheckBST(root->right, root->data + 1, max);
}

int isBST(node *root)
{
	return (CheckBST(root, INT_MIN, INT_MAX));
}



//EASY COMPARE TO ABOVE
// Returns true if given tree is BST.
bool isBST(Node* root, Node* l = NULL, Node* r = NULL)
{
	// Base condition
	if (root == NULL)
		return true;

	// if left node exist then check it has
	// correct data or not i.e. left node's data
	// should be less than root's data
	if (l != NULL and root->data <= l->data)
		return false;

	// if right node exist then check it has
	// correct data or not i.e. right node's data
	// should be greater than root's data
	if (r != NULL and root->data >= r->data)
		return false;

	// check recursively for every node.
	return isBST(root->left, l, root) and
	       isBST(root->right, root, r);
}
//USING INORDER TRAVERSAL
bool isBST(node* root)
{
	static node *prev = NULL;

	// traverse the tree in inorder fashion
	// and keep track of prev node
	if (root)
	{
		if (!isBST(root->left))
			return false;

		// Allows only distinct valued nodes
		if (prev != NULL &&
		        root->data <= prev->data)
			return false;

		prev = root;

		return isBST(root->right);
	}

	return true;
}


void solve()
{
	node *root = new node(4);
	root->left = new node(2);
	root->right = new node(5);
	root->left->left = new node(1);
	root->left->right = new node(3);

	if (isBST(root))
		cout << "Is BST";
	else
		cout << "Not a BST";
}


int32_t main()
{
	lage_rho();
	solve();
	return 0;
}