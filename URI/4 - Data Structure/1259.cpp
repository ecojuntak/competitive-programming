#include <bits/stdc++.h>

using namespace std;

bool comp(int a,int b)
{
	return a>b;
}

int main()
{
	int n,x;
	vector <int> odd,even;
	
	cin>>n;
	
	while(n--)
	{
		cin>>x;
		
		if(x%2==0) even.push_back(x);
		else odd.push_back(x);
	}
	
	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end(),comp);
	
	for(int i=0;i<even.size();i++)
		printf("%d\n",even[i]);
		
	for(int i=0;i<odd.size();i++)
		printf("%d\n",odd[i]);

	return 0;
}
