#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()
{
	int t,n;
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		ll total=0,bil;
		
		scanf("%d",&n);
		
		for(int j=0;j<n;j++)
		{
			scanf("%llu",&bil);
			total += bil;
		}
		
		printf("%llu\n",total);
	}
	
	return 0;
}
