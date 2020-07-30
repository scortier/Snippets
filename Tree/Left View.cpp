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


class soln {
public:
	node *insert(node *root, int data)
	{
		if (root == NULL)
			return new node(data);
		else
		{
			node *curr;
			if (data <= root->data)
			{
				curr = insert(root->left, data);
				root->left = curr;
			}
			else
			{
				curr = insert(root->right, data);
				root->right = curr;
			}
			return root;
		}
	}


	void leftview(node *root)
	{
		if (root != NULL)
		{
			leftview(root->left);
			cout << root->data << " ";
		}
	}


	void rightview(node *root)
	{
		if (root != NULL)
		{
			cout << root->data << " ";
			rightview(root->left);
		}
	}

	void topview(node *root)
	{
		if (root != NULL)
		{
			leftview(root);
			rightview(root->right);
		}
	}

	void preOrder(Node *root) {
		if (!root) return;
		printf("%d ", root->data);
		// cout<<(root->data)<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}


};


int32_t main()
{
	lage_rho();
	soln tree;
	node *root = NULL;

	int t;
	int data;
	std::cin >> t;
	while (t--)
	{
		std::cin >> data;
		root = tree.insert(root, data);
	}
	// tree.topview(root);
	tree.preOrder(root);
	return 0;
}