#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,max=-1,sum=0;
	int x,y;
	int qwe[105]={0};
	scanf("%d %d %d",&a,&b,&c);
	
	for(int i=1;i<=3;i++)
	{
		scanf("%d %d",&x,&y);
		if(y>max) max = y;
		for(int j=x;j<=(y-x);j++)
			qwe[j]++;
	}
	
	for(int i=1;i<=max;i++)
	{
		if(qwe[i]==1) sum += qwe[i]*a;
		else if(qwe[i]==2) sum += qwe[i]*b;
		else if(qwe[i]==3) sum += qwe[i]*c;
	}
	
	printf("%d\n",sum);
		
	return 0;
}
