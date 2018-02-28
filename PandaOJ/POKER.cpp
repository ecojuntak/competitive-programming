#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,a,b;
	
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b;
		
		int c;
		
		c = (a*(a-1))/2;
		
		printf("%d\n",c+(b-1));
	}

	
	return 0;
}
