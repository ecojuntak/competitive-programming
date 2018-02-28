#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a,b;
	scanf("%d",&a);

	for(int i=1;i<=a;i++)
	{
		char qwe[1010];
		int sum=0,sam=0,samsum=0;
		
		scanf("%d",&b);
		while(getchar()!='\n');
		gets(qwe);
		
		if(qwe[0]=='L')
		{
			for(int j=0;j<b;j++)
			{
				if(j%2==0)
				{
					if(qwe[j]!='L')
					{
						sum++;
					}
				}
				else if(j%2!=0)
				{
					if(qwe[j]!='R')
					{
						sum++;
					}
				}
			}
			
			for(int j=0;j<b;j++)
			{
				if(j%2==0)
				{
					if(qwe[j]!='R')
					{
						sam++;
					}
				}
				else if(j%2!=0)
				{
					if(qwe[j]!='L')
					{
						sam++;
					}
				}
			}
			if(sum<sam)
			{
				samsum=sum;
			}
			else if(sum>sam)
			{
				samsum=sam;
			}
			else if(sum==sam)
			{
				samsum=sum=sam;
			}
		}
		else if(qwe[0]=='R')
		{
			for(int j=0;j<b;j++)
			{
				if(j%2==0)
				{
					if(qwe[j]!='R')
					{
						sum++;
					}
				}
				else if(j%2!=0)
				{
					if(qwe[j]!='L')
					{
						sum++;
					}
				}
			}
			for(int j=0;j<b;j++)
			{
				if(j%2==0)
				{
					if(qwe[j]!='L')
					{
						sam++;
					}
				}
				else if(j%2!=0)
				{
					if(qwe[j]!='R')
					{
						sam++;
					}
				}
			}
			if(sum<sam)
			{
				samsum=sum;
			}
			else if(sum>sam)
			{
				samsum=sam;
			}
			else if(sum==sam)
			{
				samsum=sum=sam;
			}
		}
		printf("Kasus #%d: %d\n",i,samsum);
	}
	
	return 0;
}
