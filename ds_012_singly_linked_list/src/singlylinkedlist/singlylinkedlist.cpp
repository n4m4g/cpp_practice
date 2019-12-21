// singlylinkedlist.cpp
#include <iostream>
#include "../node/node.h"
#include "singlylinkedlist.h"

using namespace std;

// constructor w/o arguments
SinglyLinkedList::SinglyLinkedList() {
	head = NULL;
}

// constructor w/ arguments
SinglyLinkedList::SinglyLinkedList(Node* n) {
	head = n;
}

// deconstructor
SinglyLinkedList::~SinglyLinkedList() {}

// check if node exists using key value
Node* SinglyLinkedList::nodeExists(int k) {
	Node* tmp = NULL;
	Node* ptr = head;
	while(ptr!=NULL) {
		if(ptr->key==k) {
			tmp = ptr;
		}
		ptr = ptr->next;
	}
	return tmp;
}

void SinglyLinkedList::nodeAppend(Node* n) {
	if(nodeExists(n->key)!=NULL) {
		cout << "Node already exists with key value: " << n->key << endl;
	} else {
		if(head==NULL) {
			head = n;
			cout << "Node appended" << endl;
		} else {
			Node* ptr = head;
			while(ptr->next!=NULL) {
				ptr = ptr->next;
			}
			ptr->next = n;
			cout << "Node appended" << endl;
		}
	}
}

void SinglyLinkedList::nodePrepend(Node* n) {
	if(nodeExists(n->key)!=NULL) {
		cout << "Node already exists with key value: " << n->key << endl;
	} else {
		n->next = head;
		head = n;
		cout << "Node appended" << endl;
	}
}

void SinglyLinkedList::nodeInsertAfter(int k, Node* n) {
	// check whether the key value exist in the list
	Node* ptr = nodeExists(k);
	if(ptr==NULL) {
		cout << "No node exists with key value: " << k << endl;
	} else {
		// check the key of insert node whether exists in the list
		if(nodeExists(n->key)!=NULL) {
			cout << "Node already exists with key value: " << n->key << endl;
		} else {
			n->next = ptr->next;
			ptr->next = n;
			cout << "Node inserted" << endl;
		}
	}
}

void SinglyLinkedList::nodeDeleteByKey(int k) {
	if(head==NULL) {
		cout << "Singly Linked List is empty, cant delete" << endl;
	} else if(head->key==k) {
		head = head->next;
	} else {
		Node* tmp = NULL;
		Node* pptr = head;
		Node* cptr = head->next;
		while(cptr!=NULL) {
			if(cptr->key==k) {
				tmp = cptr;
				cptr = NULL;
			} else {
				pptr = pptr->next;
				cptr = cptr->next;
			}
		}
		if(tmp!=NULL) {
			pptr->next = tmp->next;
			cout << "Node unlinked with key value: " << k << endl;
		} else {
			cout << "Node doesn't exist with key value" << endl;
		}
	}
}

void SinglyLinkedList::nodeUpdate(int k, int d) {
	Node* ptr = nodeExists(k);
	if(ptr!=NULL) {
		ptr->data = d;
		cout << "Node data updated" << endl;
	} else {
		cout << "Node doesn't exist with key value" << endl;
	}
}

void SinglyLinkedList::nodePrint() {
	if(head==NULL) {
		cout << "Linked List is empty" << endl;
	} else {
		Node* tmp = head;
		while(tmp!=NULL) {
			cout << "(" << tmp->key << ", " << tmp->data << ")" << " --> ";
			tmp = tmp->next;
		}
	}
}



