#include <bits/stdc++.h>

using namespace std;

bool comp(int a,int b)
{
	return a>b;
}

int main()
{
	int t,n,x;
	vector <int> data,temp;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		int co=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>x;
			data.push_back(x);
			temp.push_back(x);
		}
			
		sort(data.begin(),data.end(),comp);
			
		for(int i=0;i<n;i++)
		{
			if(data[i] == temp[i]) co++;
		}
		
		printf("%d\n",co);
		
		temp.clear(); data.clear();
	}
	
	return 0;
}
