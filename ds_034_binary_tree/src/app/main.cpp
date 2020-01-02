#include <iostream>
#include <vector>
#include "binarytree/binarytree.h"

using namespace std;

int main() {
	TreeNode* nodeA = new TreeNode("A");
	TreeNode* nodeB = new TreeNode("B");
	TreeNode* nodeC = new TreeNode("C");
	TreeNode* nodeD = new TreeNode("D");
	TreeNode* nodeE = new TreeNode("E");
	TreeNode* nodeF = new TreeNode("F");
	TreeNode* nodeG = new TreeNode("G");
	TreeNode* nodeH = new TreeNode("H");
	TreeNode* nodeI = new TreeNode("I");

	nodeA->lchild = nodeB;
	nodeA->rchild = nodeC;
	nodeB->lchild = nodeD;
	nodeB->rchild = nodeE;
	nodeC->lchild = nodeF;
	nodeE->lchild = nodeG;
	nodeE->rchild = nodeH;
	nodeF->rchild = nodeI;

	BinaryTree T(nodeA);

	T.preOrder(T.root);
	cout << endl;

	T.inOrder(T.root);
	cout << endl;

	T.postOrder(T.root);
	cout << endl;
	
	T.levelOrder();
	cout << endl;

	return 0;
}
