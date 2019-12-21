// node.cpp
#include <iostream>
#include "node.h"

Node::Node() {
	key = 0;
	data = 0;
	next = NULL;
}

Node::Node(int k, int d) {
	key = k;
	data = d;
	next = NULL;
}

Node::~Node() {}

