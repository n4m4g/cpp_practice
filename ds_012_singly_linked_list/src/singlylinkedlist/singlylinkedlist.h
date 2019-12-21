// singlylinkedlist.h
#ifndef SINGLYLINKEDLIST_h_ 
#define SINGLYLINKEDLIST_h_

class SinglyLinkedList {
	public:
		Node* head;
		SinglyLinkedList();
		SinglyLinkedList(Node* n);
		~SinglyLinkedList();
		Node* nodeExists(int k);
		void nodeAppend(Node* n);
		void nodePrepend(Node* n);
		void nodeInsertAfter(int k, Node* n);
		void nodeDeleteByKey(int k);
		void nodeUpdate(int k, int d);
		void nodePrint();
};

#endif

