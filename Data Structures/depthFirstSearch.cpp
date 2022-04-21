#include<iostream>
using namespace std;
template <int V>
class GraphM
{
	int adj[V][V];
public:
	GraphM()
	{
		for (int i = 0; i < V; i++)
			for (int j = 0; j < V; j++)
				adj[i][j] = 0;
	}
	void addEdge(int u, int v, int w)
	{
		adj[u][v] = w;
		adj[v][u] = w;
	}
	void printGraph()
	{
		for (int v = 0; v < V; ++v)
		{
			cout << "Vertex(" << v << "): ";
			for (int x = 0; x < V; x++)
			{
				if (adj[v][x] != 0)
					cout << " -> " << x;
			}
			cout << endl;
		}
		cout << endl;
	}

	void DFS(bool visited[], int f)
	{
		for (int t = 0; t < V; t++)
		{
			if (!visited[t] && adj[f][t] != 0)
			{
				visited[t] = true;
				cout << "(" << f << "," << t << ") ";
				DFS(visited, t);
			}
		}
	}
	void DepthFirstShow(int v)
	{
		if (v >= V) return;
		bool visited[V] = { false };
		int f = 0;
		cout << "Starting DFShow from: " << v << " => \n ";
		visited[v] = true;
		for (int i = v; i < (V + v); i++)
		{
			f = i % V;
			DFS(visited, f);
		}
		cout << endl;
	}
};
// Driver code
int main()
{
	GraphM<5> g; // draw a graph by hand on paper, to understand the output
	g.addEdge(0, 1, 5);
	g.addEdge(0, 4, 6);
	g.addEdge(1, 2, 7);
	g.addEdge(1, 3, 2);
	g.addEdge(1, 4, 3);
	g.addEdge(2, 3, 4);
	g.addEdge(3, 4, 8);
	g.printGraph();
	g.DepthFirstShow(0);
	g.DepthFirstShow(2);
	return 0;
}
