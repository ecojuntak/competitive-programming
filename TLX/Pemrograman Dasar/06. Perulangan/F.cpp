#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	
	cin>>a;
	
	for(int i=a;i>=1;i--)
	{
		if(a%i==0) printf("%d\n",i);
	}
	
	return 0;
}
