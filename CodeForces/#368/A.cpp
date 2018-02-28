#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	int n,m;
	bool flag = false;
	
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a;
			if(a == "C" || a == "M" || a == "Y") flag = true;
		}
	}
	
	if(flag) printf("#Color\n");
	else printf("#Black&White\n");
	
	return 0;
}
