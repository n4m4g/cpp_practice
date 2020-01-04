#include <iostream>
#include <vector>
#include <memory>
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

    nodeB->parent = nodeA;
	nodeC->parent = nodeA;
    nodeD->parent = nodeB;
	nodeE->parent = nodeB;
    nodeG->parent = nodeE;
	nodeH->parent = nodeE;
    nodeF->parent = nodeC; 
    nodeI->parent = nodeF;

	BinaryTree T(nodeA);

	cout << "preOrder" << endl;
	T.preOrder(T.root);
	cout << endl;

	cout << "inOrder" << endl;
	T.inOrder(T.root);
	cout << endl;

	cout << "postOrder" << endl;
	T.postOrder(T.root);
	cout << endl;
	
	cout << "levelOrder" << endl;
	T.levelOrder();
	cout << endl;

	cout << "inOrderByParent" << endl;
	T.inOrderByParent();
	cout << endl;

	cout << "inOrderReverse" << endl;
	T.inOrderReverse();
	cout << endl;

	delete nodeA;
	delete nodeB;
	delete nodeC;
	delete nodeD;
	delete nodeE;
	delete nodeF;
	delete nodeG;
	delete nodeH;
	delete nodeI;

	return 0;
}
