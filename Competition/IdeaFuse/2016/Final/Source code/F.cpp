#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int x[1009],y[1009],t,n,X,Y;
	
	scanf("%lld",&t);
	
	for(int i=1;i<=t;i++)
	{
		scanf("%lld",&n);
		for(int j=0;j<n;j++)
			scanf("%lld %lld",&x[j],&y[j]);
			
		sort(x,x+n); sort(y,y+n);
		X = abs(x[n-1]-x[0]);
		Y = abs(y[n-1]-y[0]);
		
		if(X>=Y) printf("Case #%d: %lld\n",i,X*X);
		else printf("Case #%d: %lld\n",i,Y*Y);
	}
	
	return 0;
}
