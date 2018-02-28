#include <stdio.h>

int main()
{
	int mat[100][100];
	int x,y,i,j;
	int a,b;
	
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	b=0;
	for(i=0;i<y;i++)
	{
		a=x-1;
		for(j=a;j>=0;j--)
		{
			if(j==0)
			{
				printf("%d",mat[j][b]);
			}
			else
			{
				printf("%d ",mat[j][b]);
			}
		}
		b++;
		printf("\n");
	}
	return 0;
}
