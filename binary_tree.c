/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
  int data;
  struct node* left;
  struct node* right;
};
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(int data) {
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct node* node){
if (node == NULL)
  return;
  // first recur on left subtree
  if (node->left != NULL)
  printPostorder(node->left);
  // then recur on right subtree
  if (node->right != NULL)
  printPostorder(node->right);
  // now deal with the node
  printf("%d ", node->data);
}
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node){
  if (node == NULL)
  return;
  /* first recur on left child */
  if (node->left != NULL)
  printInorder(node->left);
  /* then print the data of node */
  printf("%d ", node->data);
  /* now recur on right child */
  if (node->right != NULL)
  printInorder(node->right);
}
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node){
  if (node == NULL)
  return;
  /* first print data of node */
  printf("%d ", node->data);
  /* then recur on left subtree */
  if (node->left != NULL)
  printPreorder(node->left);
  /* now recur on right subtree */
  if (node->right != NULL)
  printPreorder(node->right);
}
/* Driver program to test above functions*/
int main() {
struct node* root = newNode(9);
root->left = newNode(4);
root->right = newNode(15);
root->left->left = newNode(2);
root->left->right = newNode(6);
root->right->left = newNode(12);
root->right->right = newNode(17);
printf("\nPreorder traversal of binary tree is \n");
printPreorder(root);
printf("\nInorder traversal of binary tree is \n");
printInorder(root);
printf("\nPostorder traversal of binary tree is \n");
printPostorder(root);
getchar();
return 0;
}
