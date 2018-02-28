#include <bits/stdc++.h>

using namespace std;

int main()
{
	set <int> qwe;
	int a,b;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		qwe.insert(b);
	}
	
	if(a==qwe.size())
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
		
	return 0;
}
