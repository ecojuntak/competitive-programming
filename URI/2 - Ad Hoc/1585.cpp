#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d %d",&b,&c);
		printf("%d cm2\n",(b*c)/2);
	}
	
	return 0;
}
