#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,qwe[1000],A,B;
	
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
	{
		A = B = 0;
		scanf("%d",&n);
		
		for(int j=0;j<n;j++)
			scanf("%d",&qwe[j]);
			
		sort(qwe,qwe+n);
			
		for(int j=n-1;j>=0;j--)
		{
			if(A>=B) B+=qwe[j];
			else A+=qwe[j];
		}
		
		printf("Case #%d: %d\n",i,abs(A-B));
	}
	
	return 0;
}
