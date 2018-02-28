#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int a, qwe[100005];
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int b,c,x=1;
		scanf("%d %d",&b,&c);
		qwe[0]=c;
		for(int k=1;k<=b;k++)
		{
			scanf("%d",&qwe[k]);
		}
		sort(qwe,qwe+b+1);
		
		for(int k=b;k>=0;k--)
		{
			if(qwe[k]==c) break;
			else x++; 
		}
		printf("Kasus #%d: %d\n",i,x);
	}
	
	return 0;
}
