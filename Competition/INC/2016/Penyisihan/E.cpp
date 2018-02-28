#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,m,idx;
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
	{
		int qwe[2005] = {0};
		scanf("%d %d",&n,&m);
		
		for(int j=0;j<n;j++){
			scanf("%d",&idx);
			qwe[idx]++;	
		}
		
		for(int j=0;j<m;j++){
			scanf("%d",&idx);
			qwe[idx]++;	
		}
		
		int count = 0;
		for(int j=0;j<2005;j++){
			if(qwe[i]%2==1) count++;
		}
		
		printf("Case #%d: %d\n",i,count);
	}
	
	
	return 0;
}
