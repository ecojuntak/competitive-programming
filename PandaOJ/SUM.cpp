#include <bits/stdc++.h>

using namespace std;

int main()
{
	bool qwe[100];
	int asd[100],ind=0;
	memset(qwe,true,sizeof(qwe));
	
	for(int i=2;i<=100;i++)
	{
		if(qwe[i])
		{
			asd[ind] = i;
			ind++;
			for(int j=i*i;j<=100;j+=i) qwe[j]=false;
		}
	}
	
	
	int a,b,count;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		count = 0;
		scanf("%d",&b);
		
		for(int w=0;w<25;w++)
		{
			for(int x=w+1;x<25;x++)
			{
				for(int y=x+1;y<25;y++)
				{
					for(int z=y+1;z<25;z++)
					{
						if(asd[w]+asd[x]+asd[y]+asd[z]==b) count++;
					}
				}
			}
		}
		printf("Case #%d: %d\n",i,count);
	}
	
	return 0;
}
