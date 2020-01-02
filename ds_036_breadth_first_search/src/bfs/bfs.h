#ifndef BFS_H_
#define BFS_H_

#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

class Graph {
	private:
		int num_vertex;
		vector< list<int> > AdjList;
	public:
		Graph();
		Graph(int N);
		~Graph();

		void AddEdgeList(int from, int to);
		void BFS(int Start);

		template <typename T>
		void show_status(vector<T>& v);
};



#endif
