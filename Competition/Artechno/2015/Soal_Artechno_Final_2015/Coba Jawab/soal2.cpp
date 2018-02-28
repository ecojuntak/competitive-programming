#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a,b;
	char qwe[1000009];
	
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=0;i<a;i++)
	{
		
		char temp[1000009]={};
		int y=0;
		
		
		scanf("%s",qwe);
		for(int j=0;j<b;j++)
		{
			int x=strlen(qwe);
			temp[y]=qwe[0];
			for(int k=0;k<x;k++)
			{
				qwe[k]=qwe[k+1];
			}
			printf("%s",qwe);
			printf("%s",temp);
			y++;
		}
		if(i!=a-1) printf(" ");
	}
	
	return 0;
}
