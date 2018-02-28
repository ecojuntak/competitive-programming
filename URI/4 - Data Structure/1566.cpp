#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	set <int> data;
	int n,x;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>x;
			data.push_back(x);
		}
		
//		sort(data.begin(),data.end());
		
		for(int i=0;i<n;i++)
		{
			printf("%d",data[i]);
			if(i!=n-1) printf(" ");
		}
		printf("\n");
		
		data.clear();
	}
	
	return 0;
}
