#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int convert(int j)
{
	char qwe[1000];
	char asd[1000];
	int e,x=0,i;
	snprintf(qwe,sizeof(qwe),"%d",j);

	strcpy(asd,qwe);
	int t=strlen(qwe)-1;
	
	for(i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]!=asd[t]) break;
		else 
		{
			x++; 
			t--;
		}
	}

	if(x==strlen(qwe)) return 1;
	else return 0;
}

int main()
{
	int a,b;
	int e;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int sum=0;
		scanf("%d",&b);
		for(int j=1;j<=b;j++)
		{
			e=convert(j);
			if(e==1) sum++;
		}
		printf("Kasus #%d: %d\n",i,sum);
	}	
	
	return 0;
}
