#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a-i;j++)
			printf(" ");
		
		for(int j=1;j<=i;j++)
			printf("*");
			
		printf("\n");
	}
	
	return 0;
}
