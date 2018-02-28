#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,x,k,total;
	
	cin>>a>>b>>k>>x;
	
	total = x;
	
	for(int i=0;i<k;i++)
	{
		total = abs((a*total)+b);
	}
	
	printf("%d\n",total);
	
	return 0;
}
