#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,qwe[1000000],sum=0,maks;
	int c;
	scanf("%d %d",&a,&b);
	
	c = ceil((float)(a)/(float)(b));

	for(int i=0;i<a;i++)
		scanf("%d",&qwe[i]);
	
	int x = 0;
	
	for(int h=1;h<=c;h++)
	{
		maks = -1;
		for(int j=x;j<b*h;j++)
		{
			if(qwe[j]>maks) maks = qwe[j];
			x++;
		}
		sum += maks;
	}
		
	printf("%d\n",sum+3);
	
	return 0;
}
