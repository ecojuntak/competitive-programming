#include <cstdio.>

using namespace std;

int main()
{
	int qwe[10]={0};
	
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			for(int k=1;k<=8;k++)
			{
				if(i+j+k==a)
				{
					qwe[i]=1;
					qwe[j]=1;
					qwe[k]=1;
					for(int x=1;x<=8;x++)
					{
						for(int y=1;y<=8;y++)
						{
							for(int z=1;z<=8;z++)
							{
								if(x+y+z==b && qwe[i]==0 && qwe[j]==0 && qwe[k]==0)
								{
									qwe[x]=1;
									qwe[y]=1;
									qwe[z]=1;
								}
								int m=0;
								for(int n=1;n<=8;n++)
								{
									if(qwe[n]==0 && m==0) 
									{
										printf("%d ",n);
										m++;	
									}
									if(qwe[n]==0 && m==1)
									{
										printf("%d\n",n);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}
