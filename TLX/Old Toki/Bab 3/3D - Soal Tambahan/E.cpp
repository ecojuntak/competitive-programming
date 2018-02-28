#include <bits/stdc++.h>

using namespace std;

void identik(int *qwe[],int *asd[])
{
	
}

int main()
{
	int a,b,c,d;
	int qwe[80][80],asd[80][80];
	
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			scanf("%d",&qwe[i][j]);
	
	scanf("%d %d",&c,&d);
	for(int i=0;i<c;i++)
		for(int j=0;j<d;j++)
			scanf("%d",&asd[i][j]);
	
	identik(qwe,asd);
			
	return 0;
}
