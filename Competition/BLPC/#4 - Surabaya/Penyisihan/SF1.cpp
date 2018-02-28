#include <bits/stdc++.h>
#define ll long long
#define ft first
#define sc second
using namespace std;

pair<ll,pair<int,int> >edges[100005];
int parent[100005];

int cek(int id){
	if(parent[id]==id)return id;
	return parent[id]=cek(parent[id]);
}

int main(){
	
	int n,m;
	scanf("%d%d",&n,&m);
	
	ll ans=0;
	for(int x=0;x<m;x++){
		int a, b; ll c;
		scanf("%d%d%lld",&edges[x].sc.ft,&edges[x].sc.sc,&edges[x].ft);
	}
	
	for(int x=1;x<=n;x++)parent[x]=x;
	sort(edges,edges+m);
	bool once = false;
	
	for(int i=1;i<=n;i++) printf("%d => %d\n",i,parent[i]);
	
	for(int x=0;x<m;x++){
		ll pnj=edges[x].ft;
		int nodeA = edges[x].sc.ft;
		int nodeB = edges[x].sc.sc;
		
		int parA = cek(nodeA);
		int parB = cek(nodeB);
		
		printf("Iterasi %d, parA = %d and parB = %d\n",x+1,parA,parB);
		
		if(parA!=parB){
			parent[parB]=parA;
			ans+=pnj;
		}
		else if(once==false){
			once=true;
			parent[parB]=parA;
			ans+=pnj;
		}
		//cout<<pnj<<" "<<nodeA<<" "<<nodeB<<" "<<ans<<endl;
	}
	printf("%lld\n",ans);
	
	return 0;
}
