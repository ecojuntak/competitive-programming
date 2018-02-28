#include <bits/stdc++.h>
#define ft first
#define sc second
#define mp make_pair
#define pb push_back

using namespace std;

vector<int>adj[100005];
bool g[100005];
int pnj[100005];

int main() {

	int n;
	scanf("%d",&n);
	
	for(int x=0;x<(n-1);x++){
		int a,b;
		scanf("%d%d",&a,&b);
		adj[a].pb(b);
		adj[b].pb(a);
	}
	
	queue<pair<int,int> >q;
	q.push(mp(1,0));
	memset(g,false,sizeof g);
	g[1]=true;
	
	int node1=-1;
	
	while(!q.empty()){
		
		pair<int,int>now = q.front();
		q.pop();
		
		node1=now.ft;
		
		for(int x=0;x<adj[now.ft].size();x++){
			int neigh = adj[now.ft][x];
			if(g[neigh]==false){
				g[neigh]=true;
				q.push(mp(neigh,now.sc+1));
			}
		}
	}
	
	int node2=-1;
	q.push(mp(node1,0));
	memset(g,false,sizeof g);
	g[node1]=true;
	
	while(!q.empty()){
		
		pair<int,int>now = q.front();
		q.pop();
		
		node2=now.ft;
		pnj[now.ft]=now.sc;
		
		for(int x=0;x<adj[now.ft].size();x++){
			int neigh = adj[now.ft][x];
			if(g[neigh]==false){
				g[neigh]=true;
				q.push(mp(neigh,now.sc+1));
			}
		}
	}
	
	q.push(mp(node2,0));
	memset(g,false,sizeof g);
	g[node2]=true;
	
	while(!q.empty()){
		
		pair<int,int>now = q.front();
		q.pop();
		
		pnj[now.ft]=max(pnj[now.ft],now.sc);
		
		for(int x=0;x<adj[now.ft].size();x++){
			int neigh = adj[now.ft][x];
			if(g[neigh]==false){
				g[neigh]=true;
				q.push(mp(neigh,now.sc+1));
			}
		}
	}
	
	for(int x=1;x<=n;x++){
		printf("%d\n",pnj[x]);
	}
	
	return 0;
}
