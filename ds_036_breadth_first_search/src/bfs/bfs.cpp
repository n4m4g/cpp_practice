#include "bfs.h"

Graph::Graph(): num_vertex(0) {}

Graph::Graph(int N): num_vertex(N) {
	AdjList.resize(num_vertex);
}

Graph::~Graph() {}

void Graph::AddEdgeList(int from, int to) {
	AdjList[from].push_back(to);
}

void Graph::BFS(int Start) {
	// record whether been visited
	vector<int> color(num_vertex, 0);
	// distance from start
	vector<int> dist(num_vertex, num_vertex+1);
	vector<int> predecessor(num_vertex, -1);

	queue<int> q;
	int i = Start;

	for(int j=0; j<num_vertex; j++) {
		if(color[i]==0) {
			color[i] = 1;
			dist[i] = 0;
			q.push(i);
			while(!q.empty()) {
				int u = q.front();
				list<int>::iterator it;
				for(it=AdjList[u].begin(); it!=AdjList[u].end(); it++) {
					if(color[*it]==0) {
						color[*it] = 1;
						dist[*it] = dist[u] + 1;
						predecessor[*it] = u;
						q.push(*it);
					}
				}
				q.pop();
				color[u] = 2;
			}
		}
		i = j;
	}

	vector<char> ch{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
	show_status(ch);

	cout << "color" << endl;
	show_status(color);
	
	cout << "dist" << endl;
	show_status(dist);
	
	cout << "predecessor" << endl;
	show_status(predecessor);

}

template <typename T>
void Graph::show_status(vector<T>& v) {
	typename vector<T>::iterator it;
	for(it=v.begin(); it!=v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
