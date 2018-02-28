#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	
	cin>>a;
	int x=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",x);
			x++;
			if(x>9) x=0;
		}
		printf("\n");
	}
	
	return 0;
}
