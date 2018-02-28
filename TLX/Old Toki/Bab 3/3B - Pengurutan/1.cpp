#include <bits/stdc++.h>

using namespace std;

int main()
{
	map <int> qwe;
	int a,b;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&a);
		qwe.push_back(a);
	}
	
	sort(qwe.begin(),qwe.end());
	
	int x = a/2;
	float y;
	
	if(a%2==1)
	{
		printf("%d\n",qwe[x]);
	}
	else
	{
		y = qwe[x]+qwe[x+1];
		y = (float)(y/2);
		printf("%.2f\n",y);
	}
	
	return 0;
}
