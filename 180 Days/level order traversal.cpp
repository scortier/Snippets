// Using two queues
void level_order_traversal_1(BinaryTreeNode* root) {
  if (root == nullptr) {
    return;
  }

  queue<BinaryTreeNode*> arr[2];

  queue<BinaryTreeNode*>* current_queue = &arr[0];
  queue<BinaryTreeNode*>* next_queue = &arr[1];

  current_queue->push(root);
  int level_number = 0;

  while (!current_queue->empty()) {
    BinaryTreeNode* temp = current_queue->front();
    current_queue->pop();
    cout << temp->data << ",";

    if (temp->left != nullptr) {
      next_queue->push(temp->left);
    }

    if (temp->right != nullptr) {
      next_queue->push(temp->right);
    }

    if (current_queue->empty()) {
      cout << endl;
      ++level_number;
      current_queue = &arr[level_number % 2];
      next_queue = &arr[(level_number + 1) % 2];
    }
  }
  cout << endl;
}

int main(int argc, char* argv[]) {

  BinaryTreeNode* root = create_random_BST(15);
  level_order_traversal_1(root);
  cout << endl;
  cout << "Inorder = ";
  display_inorder(root);

}