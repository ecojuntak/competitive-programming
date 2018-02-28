#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,a;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>a;
			if(a==1) printf("Rolien\n");
			else if(a==2) printf("Naej\n");
			else if(a==3) printf("Elehcim\n");
			else if(a==4) printf("Odranoel\n");
		}
	}
	
	return 0;
}
