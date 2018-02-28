#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a,b,min=999999,sum=0;
	int qwe[109];
	char asd[109];
	
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++)
	{
		sum=0;
		scanf("%s",&asd);
		for(int j=0;j<strlen(asd);j++)
		{
			if(asd[j]=='.') sum++;
			else sum=sum+2;
		}
		qwe[i]=sum;
		if(min>sum) min=sum;
	}
	
	if(qwe[b-1]==min)
		printf("%d\n",b);
	else
	{
		for(int i=0;i<a;i++)
		{
			if(qwe[i]==min)
			{
				printf("%d\n",i+1);
				break;
			}
		}
	}
	
	
	return 0;
}
