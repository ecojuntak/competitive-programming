#include <cstdio>

using namespace std;

int main()
{
	int a,i=0,x=2;
	int qwe[1000];
	
	qwe[0]=0;
	qwe[1]=1;
	scanf("%d",&a);
	
	while(i!=a)
	{
		qwe[x]=qwe[x-1]+qwe[x-2];
		x++;
		i++;
	}
	
	for(i=0;i<a;i++)
	{
		printf("%d",qwe[i]);
		if(i!=a-1) printf(" ");
	}
	printf("\n");
	
	return 0;
}
