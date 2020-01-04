#include <iostream>
#include <queue>
#include <memory>
#include "binarytree.h"

using namespace std;

// binary tree: left is always in front of right

TreeNode::TreeNode(): lchild(nullptr), rchild(nullptr), parent(nullptr), name("") {}
TreeNode::TreeNode(string s): lchild(nullptr), rchild(nullptr), parent(nullptr), name(s) {}
TreeNode::~TreeNode() {}

BinaryTree::BinaryTree(): root(nullptr) {}
BinaryTree::BinaryTree(TreeNode* node): root(node) {}
BinaryTree::~BinaryTree() {}

// root -> left -> right
void BinaryTree::preOrder(TreeNode* curr) {
	if(curr) {
		cout << curr->name << " ";
		preOrder(curr->lchild);
		preOrder(curr->rchild);
	}
}

// left -> root -> right
void BinaryTree::inOrder(TreeNode* curr) {
	if(curr) {
		inOrder(curr->lchild);
		cout << curr->name << " ";
		inOrder(curr->rchild);
	}
}

// left -> right -> root
void BinaryTree::postOrder(TreeNode* curr) {
	if(curr) {
		postOrder(curr->lchild);
		postOrder(curr->rchild);
		cout << curr->name << " ";
	}
}

// top to down, left to right
void BinaryTree::levelOrder() {
	queue< TreeNode* > q;
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

// get left most node
TreeNode* BinaryTree::leftmost(TreeNode* curr) {
	while(curr->lchild) {
		curr = curr->lchild;
	}
	return curr;
}

// 1. curr node has right child, return leftmost(curr->rchild)
// 2. curr node has no right child, return ancestor which rchild != curr
TreeNode* BinaryTree::inOrderSuccessor(TreeNode* curr) {
	if(curr->rchild) {
		return leftmost(curr->rchild);
	}

	TreeNode* successor = curr->parent;
	while(successor && curr==successor->rchild) {
		curr = successor;
		successor = successor->parent;
	}

	return successor;
}

void BinaryTree::inOrderByParent() {
	TreeNode* curr = leftmost(root);
	while(curr) {
		cout << curr->name << " ";
		curr = inOrderSuccessor(curr);
	}
}


TreeNode* BinaryTree::rightmost(TreeNode* curr) {
	while(curr->rchild){
		curr = curr->rchild;
	}
	return curr;
}

TreeNode* BinaryTree::inOrderPredecessor(TreeNode* curr) {
	if(curr->lchild) {
		return rightmost(curr->lchild);
	}

	TreeNode* predecessor = curr->parent;
	while(predecessor && curr == predecessor->lchild) {
		curr = predecessor;
		predecessor = predecessor->parent;
	}
	return predecessor;
}

void BinaryTree::inOrderReverse() {
	TreeNode* curr = rightmost(root);
	while(curr) {
		cout << curr->name << " ";
		curr = inOrderPredecessor(curr);
	}
}
