#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


struct Node {
public :
  char data;
  Node *left_Node;// The left subtree of the node
  Node *right_Node; // The right subtree of the node
  Node *parent;

  //Constructor method;
  Node(char input_data) {
    data = input_data; //initializes the Node data to input data
  }
};

Node* return_node(char input_data) {
  Node *newnode = new Node(input_data);
  return (newnode);
}


struct BinaryTree {
public:
  Node* root;

  //utility functions
  BinaryTree() {
    root = NULL;
  }
  BinaryTree(char input_data) {
    root = return_node(input_data);
  }

};

Node* lowest_common_ancestor(Node *curr, Node *node1, Node *node2) {

  if (curr == NULL) { // if the curr node is NULL return NULL because we have reached the leaf
    return NULL;
  } else if (curr == node1 || curr == node2) {
    // if the current node is either node1 or node2, return the current node.
    return curr;
  }
  Node *left_subtree = lowest_common_ancestor(curr->left_Node, node1, node2);
  Node *right_subtree = lowest_common_ancestor(curr->right_Node, node1, node2);

  if (left_subtree != NULL && right_subtree != NULL) {
    // if the curr node has node1 and node2 in it's left subtree and
    //right subtree. Return the current node
    return curr;
  } else if (left_subtree != NULL) { //return the left subtree
    return left_subtree;
  } else {
    return right_subtree;//otherwise return the right subtree.
  }


  return NULL;//lowest common ancestor is not found
}


int main() {
  // initializing a binary tree
  struct BinaryTree newTree('d');

  // adding left and right plus the parent for each node
  newTree.root->left_Node = return_node('c');
  newTree.root->left_Node->parent = newTree.root;
  newTree.root->right_Node = return_node('e');
  newTree.root->right_Node->parent = newTree.root;

  newTree.root->left_Node->left_Node = return_node('a');
  newTree.root->left_Node->left_Node->parent = newTree.root->left_Node;
  newTree.root->left_Node->right_Node = return_node('b');
  newTree.root->left_Node->right_Node->parent = newTree.root->left_Node;

  newTree.root->right_Node->left_Node = return_node('f');
  newTree.root->right_Node->left_Node->parent = newTree.root->right_Node;
  newTree.root->right_Node->right_Node = return_node('g');
  newTree.root->right_Node->right_Node->parent = newTree.root->right_Node;

  // call the method of two of the nodes
  Node* result = lowest_common_ancestor(newTree.root, newTree.root->right_Node->right_Node, newTree.root->right_Node->left_Node);
  cout << "lowest common ancestor for nodes " << newTree.root->right_Node->right_Node->data << " and " << newTree.root->right_Node->left_Node->data << " is : " << result->data << endl;
  return 0;
}