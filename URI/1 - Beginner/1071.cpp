#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y,temp;
	int sum=0;
	
	cin>>x>>y;
	
	if(x<y)
	{
		for(int i=x+1;i<y;i++)
		{
			if(i<0)
			{
				temp = i * -1;	
				if(temp%2==1)
				{
					temp = temp * -1;
					sum+=temp;
//					printf("%d\n",i);
				}
			}
			if(i%2==1)
			{
				sum+=i;
//				printf("%d\n",i);
			}
		}
	}
	else
	{
		for(int i=y+1;i<x;i++)
		{
			if(i<0)
			{
				temp = i * -1;
				if(temp%2==1)
				{
					temp = temp * -1;
					sum+=temp;
//					printf("%d\n",i);
				}
			}
			if(i%2==1)
			{
//				printf("%d\n",i);
				sum+=i;
			}
		}
	}
	
	printf("%d\n",sum);
	
	return 0;
}
