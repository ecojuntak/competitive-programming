#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i,n) for(int (i) = 0; (i) < (int)(n); (i)++)
#define pb push_back
#define mp make_pair
#define f first
#define s second

int main()
{
	int n,m;
	int x;
	int e,v;
	int a,b;
	int qwe[100005]={0};
	bool flag = true;
	scanf("%d %d",&n,&m);
	
	if(n%2==1) printf("-1\n");
	else
	{
		int x = n/2;
		
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
			qwe[a]++;
			qwe[b]++;
			if(qwe[a]>3 || qwe[b]>3) flag = true;
		}
		
		e = x*2;
		v = x+(2*(x-1));
		
		if(e==n && v==m && !flag)
		{
			printf("%d\n",x);
		}
		else printf("-1\n");
	}
	
	return 0;
}
