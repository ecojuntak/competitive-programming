#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a;
	int prio[1005];
	int max=0;
	char pasien[105];

	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		int sum=0;
		scanf("%s",&pasien);
		for(int j=0;j<strlen(pasien);j++)
		{
			if(pasien[j]=='.') sum=sum+1;
			else sum=sum+2;
		}
		if(sum>max) max=sum;
		prio[i]=sum;
	}

	int n=1;
	
	for(int i=0;i<a;i++)
	{
		if(prio[i]==max) 
		{
			printf("%d\n",n);
			break;	
		}
		else n++;
	}
	
	return 0;
}
