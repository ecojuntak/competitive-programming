// C++ program to print DFS traversal from a given vertex in a  given graph
#include <bits/stdc++.h>

using namespace std;

int qwe[5005];
int z,m=0;

void generate(int a)
{
	for(int i=0;i<a;i++) qwe[i]=0;
}
// Graph class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v's list.
}

void Graph::DFSUtil(int v, bool visited[])
{
//  Mark the current node as visited and print it
    visited[v] = true;
//	cout << v << " ";
	qwe[v]++; z++;
//	printf("\t max >> %d\n",z);
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

// DFS traversal of the vertices reachable from v. It uses recursive DFSUtil()
void Graph::DFS(int v)
{
	z=0;
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited);
    if(z > m ) m = z;
}

int main()
{
    // Create a graph given in the above diagram
//    Graph g(4);
//    g.addEdge(0, 1);
//    g.addEdge(0, 2);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0);
//    g.addEdge(2, 3);
//    g.addEdge(3, 3);

	int a,b,x,y;
	
	scanf("%d %d",&a,&b);
	generate(a);
	Graph g(a);
	
	for(int i=0;i<b;i++)
	{
		scanf("%d %d",&x,&y);
		g.addEdge(x-1,y-1);
	}
	
	for(int i=0;i<a;i++)
	{
//    	printf("Following is Depth First Traversal (starting from vertex %d) \n",i);
    	g.DFS(i);
//    	printf("\n");
	}
	
//	for(int i=0;i<a;i++) 
//		printf("%d ",qwe[i]);
//	printf("\n");
	int *it;
	it  = max_element(qwe,qwe+a);
	for(int i=0;i<a;i++) 
	{
		if(qwe[i] == *it)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	
//	printf("max %d\n",m);

    return 0;
}

