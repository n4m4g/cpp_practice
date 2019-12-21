// node.h
#ifndef NODE_H_
#define NODE_H_

class Node {
	public:
		int key;
		int data;
		Node* next;

		Node();
		Node(int k, int d);

		~Node();
};

#endif
