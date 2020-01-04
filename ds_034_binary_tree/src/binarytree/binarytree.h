#ifndef BINARYTREE_H_ 
#define BINARYTREE_H_

using namespace std;

class TreeNode {
	public:
		TreeNode* lchild;
		TreeNode* rchild;
		TreeNode* parent;
		string name;

		TreeNode();
		TreeNode(string s);
		~TreeNode();
};

class BinaryTree {
	public:
		TreeNode* root;
		BinaryTree();
		BinaryTree(TreeNode* node);
		~BinaryTree();

		void preOrder(TreeNode* curr);
		void inOrder(TreeNode* curr);
		void postOrder(TreeNode* curr);
		void levelOrder();

		TreeNode* leftmost(TreeNode* curr);
		TreeNode* inOrderSuccessor(TreeNode* curr);
		void inOrderByParent();

		TreeNode* rightmost(TreeNode* curr);
		TreeNode* inOrderPredecessor(TreeNode* curr);
		void inOrderReverse();
};

#endif
