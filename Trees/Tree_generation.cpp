#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int val)
{
	struct node* node = new struct node;
	node->data = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int main()
{
	struct node* root = newNode(8);
	root->left = newNode(4);
	root->right  = newNode(5);
	root->left->left = newNode(7);
	root->left->right = newNode(22);
	root->left->left->right = newNode(23);

	cout << root->left->left->right->data;  // output = 23


	//  tree structure from above input

	//        8
	//      /   \
	//     4     5
	//    / \
	//   7  22
	//    \
	//     23

	return 0;
}