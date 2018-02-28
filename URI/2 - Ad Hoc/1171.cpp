#include <stdio.h>

using namespace std;

int main()
{
	int a,b;
	int qwe[5000]={0};
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		qwe[b]++;	
	}
	
	for(int i=0;i<5000;i++)
	{
		if(qwe[i]!=0)
		{
			printf("%d aparece %d vez(es)\n",i,qwe[i]);
		}
	}
	
	
	return 0;
}
