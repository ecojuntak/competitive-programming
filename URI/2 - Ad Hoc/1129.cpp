#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,qwe[10],c,d;
	
	scanf("%d",&a);
	while(a!=0)
	{
		for(int i=0;i<a;i++)
		{
			c=0;
			for(int j=0;j<5;j++)
			{
				scanf("%d",&qwe[j]);
			}
			
			for(int j=0;j<5;j++)
			{
				if(qwe[j]<=127)
				{
					c++;
					d=j;	
				}
			}
			
			if(c!=1) printf("*\n");
			else
			{
				if(d==0) printf("A\n");
				else if(d==1) printf("B\n");
				else if(d==2) printf("C\n");
				else if(d==3) printf("D\n");
				else printf("E\n");
			}
			
		}
		scanf("%d",&a);
	}
	
	return 0;
}
