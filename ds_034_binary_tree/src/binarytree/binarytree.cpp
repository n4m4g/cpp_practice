#include <iostream>
#include <queue>
#include "binarytree.h"

using namespace std;

// binary tree: left is always in front of right

TreeNode::TreeNode(): lchild(NULL), rchild(NULL), parent(NULL), name(""){}; 
TreeNode::TreeNode(string s): lchild(NULL), rchild(NULL), parent(NULL), name(s){};
TreeNode::~TreeNode(){};

BinaryTree::BinaryTree(): root(NULL){};
BinaryTree::BinaryTree(TreeNode* node): root(node){};
BinaryTree::~BinaryTree(){};

void BinaryTree::preOrder(TreeNode* curr) {
	if(curr) {
		// root -> left -> right
		cout << curr->name << " ";
		preOrder(curr->lchild);
		preOrder(curr->rchild);
	}
}

void BinaryTree::inOrder(TreeNode* curr) {
	if(curr) {
		// left -> root -> right
		inOrder(curr->lchild);
		cout << curr->name << " ";
		inOrder(curr->rchild);
	}
}

void BinaryTree::postOrder(TreeNode* curr) {
	if(curr) {
		// left -> right -> root
		postOrder(curr->lchild);
		postOrder(curr->rchild);
		cout << curr->name << " ";
	}
}

void BinaryTree::levelOrder() {
	// top to down, left to right
	queue<TreeNode*> q;
	q.push(this->root);

	while(!q.empty()) {
		TreeNode* curr = q.front();
		q.pop();
		cout << curr->name << " ";
		if(curr->lchild) {
			q.push(curr->lchild);
		}
		if(curr->rchild) {
			q.push(curr->rchild);
		}
	}
}

// TreeNode* BinaryTree::leftmost(TreeNode* curr) {
// 	while(curr->lchild) {
// 		curr = curr->lchild;
// 	}
// 	return curr;
// }

// TreeNode* BinaryTree::inOrderSuccessor(TreeNode* curr) {
// 	if(curr->rchild) {
// 		return leftmost(curr->rchild);
// 	}
