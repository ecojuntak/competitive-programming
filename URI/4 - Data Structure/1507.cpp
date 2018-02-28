#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,q;
	string kata, a;
	
	cin>>t;
	
	while(t--)
	{
		cin>>kata;
		cin>>q;
		
		while(q--)
		{
			cin>>a;
			
			if(kata.find(a)!=string::npos) printf("Yes\n");
			else printf("No\n");
		}
	}
	
	return 0;
}
