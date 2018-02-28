#include <cstdio>

using namespace std;

int main()
{
	int a;
	int min=999999;
	int qwe[1009];
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&qwe[i]);
		if(min>qwe[i]) min=qwe[i];
	}
	
	int i=0;
	
	while(qwe[i]!=min)
	{
		i++;
	}
	
	printf("Menor valor: %d\n",min);
	printf("Posicao: %d\n",i);
	return 0;
}
