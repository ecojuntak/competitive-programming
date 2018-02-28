#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%d %d",&b,&c);
		int count = 0;
		int start = b;
		
		while(start<=c)
		{
			start+=(b-1);
			count++;
		}
		start-=(b-1);
		if(count%2==0) printf("Case #%d: %d\n",i,1+(c-start));
		else printf("Case #%d: %d\n",i,b-(c-start));
	}
	
	return 0;
}
