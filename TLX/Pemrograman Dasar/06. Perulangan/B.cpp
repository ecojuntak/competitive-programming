#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,total=0,n;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		total += a;
	}
	
	printf("%d\n",total);
	
	return 0;
}
