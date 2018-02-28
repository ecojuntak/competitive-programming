#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,q,bil,y=1;
	vector<int> data;
	vector<int>::iterator low;
	
	cin>>n>>q;
	
	while(n!=0 && q!=0)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&bil);
			data.push_back(bil);
		}
		
		sort(data.begin(),data.end());
		
		printf("CASE# %d:\n",y);
		
		while(q--)
		{
			cin>>bil;
			int d;
			if(binary_search(data.begin(),data.end(),bil))
			{
				low = lower_bound(data.begin(),data.end(),bil);
				d = low-data.begin();
				printf("%d found at %d\n",bil,d+1);
			}
			else printf("%d not found\n",bil);
		}
		y++;
		cin>>n>>q;
		data.clear();
	}
	
	
	return 0;
}
