#include <bits/stdc++.h>

using namespace std;

int **mrH(int **asd,int **qwe,int a)
{
	int x=0,y;
	for(int i=0;i<a;i++)
	{
		y=0;
		for(int j=a-1;j>=0;j--)
		{
			asd[x][y]=qwe[i][j];
			y++;
		}
		x++;
	}

	return asd;
}


int **mrV(int **asd,int **qwe,int a)
{
	int x=0,y;
	for(int i=a-1;i>=0;i--)
	{
		y=0;
		for(int j=0;j<a;j++)
		{
			asd[x][y]=qwe[i][j];
			y++;
		}
		x++;
	}

	return asd;
}

int **allocation(int a)
{
	int **arr;

	arr=(int **)malloc(a*sizeof(int *));
	for(int m=0;m<a;m++)
		arr[m]=(int *)malloc(a*sizeof(int));
	return arr;
}

int main()
{
	int **qwe,**asd;
	int a;
	char str[15];
	scanf("%d",&a);

	qwe=allocation(a);
	asd=allocation(a);

	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
			scanf("%d",&qwe[i][j]);
	}

	scanf("%s",&str);

	if(str[0]=='R' || str[0]=='L') asd = mrH(asd,qwe,a);
	else if(str[0]=='T' || str[0]=='B') asd = mrV(asd,qwe,a);


	if(strlen(str)==1)
	{
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a;j++)
			{
				printf("%3d",asd[i][j]);
				if(j!=a-1) printf(" ");
			}
			printf("\n");
		}
	}
	else if (strlen(str)>1)
	{
		for(int i=1;i<strlen(str);i++)
		{
			if(i%2==1)
			{
				if(str[i]=='R' || str[i]=='L') qwe = mrH(qwe,asd,a);
				else if(str[i]=='T' || str[i]=='B') qwe = mrV(qwe,asd,a);
			}
			else
			{
				if(str[i]=='R' || str[i]=='L') asd = mrH(asd,qwe,a);
				else if(str[i]=='T' || str[i]=='B') asd = mrV(asd,qwe,a);
			}
		}

		if(strlen(str)%2==1)
		{
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<a;j++)
				{
					printf("%3d",asd[i][j]);
					if(j!=a-1) printf(" ");
				}
			printf("\n");
			}
		}
		else
		{
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<a;j++)
				{
					printf("%3d",qwe[i][j]);
					if(j!=a-1) printf(" ");
				}
			printf("\n");
			}
		}
	}

	return 0;
}
