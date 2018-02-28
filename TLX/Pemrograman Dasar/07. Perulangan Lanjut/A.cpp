#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		if(i%10==0) continue;
		else if(i==42)
		{
			printf("ERROR\n");
			break;
		}
		else printf("%d\n",i);
	}
	
	return 0;
}
