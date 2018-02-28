#include <bits/stdc++.h>

using namespace std;

void sieve(int x,int y)
{
	bool qwe[y+1];
	memset(qwe,true,sizeof(qwe));
	int sum=0;
	
	for(int i=2;i*i<=y;i++)
	{
		if(qwe[i]==true)
		{
			for(int j=i*2;j<=y;j+=i) qwe[j]=false;
		}
	}
	
	for(int i=x;i<=y;i++)
	{
		if(qwe[i]==true) sum++;
	}
	
	printf("%d\n",sum);
}

int main()
{
	int a,x,y;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d %d",&x,&y);
		if(x==1) x=2;
		sieve(x,y);
	}
	
	return 0;
}
