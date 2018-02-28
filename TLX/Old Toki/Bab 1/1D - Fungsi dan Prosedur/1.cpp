#include <stdio.h>

int fak(int a);

int main()
{
	int x,akhir;
	scanf("%d",&x);
	if(x<0 || x>10)
	{
		printf("ditolak\n");
	}
	else
	{
		akhir = fak(x);
		printf("%d\n", akhir);
	}
		
	return 0;
}

int fak(int a)
{
	int i;
	int p=1;
	for(i=a;i>=1;i--)
	{
		p=p*i;
	}
	
	return p;
}
