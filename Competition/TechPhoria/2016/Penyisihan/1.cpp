#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef unsigned long long int ull;
typedef long long ll;
typedef vector<ll> vi;


int main()
{
	ull n,x,co=0;
	int m;
	set<ull> data;
	set<ull>::iterator it;
	
	scanf("%llu %d",&n,&m);
	
	for(int j=0;j<m;j++)
	{
		scanf("%llu",&x);
		for(ll i=x;i<=n;i+=x)
		{
			data.insert(i);
		}
	}
	
//	for(it=data.begin();it!=data.end();it++)
//	{
//		cout<<*it<<" ";
//	}
	
	printf("%llu\n",(ull)data.size());
	
	
	return 0;
}
