#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	vector <int> data;
	
	cin>>n;
	
	while(n!=0)
	{
		queue <int> Q;
		
		for(int i=1;i<=n;i++)
			Q.push(i);
		
		while(true)
		{
			data.push_back(Q.front());
			Q.pop();
			if(Q.size()==1) break;
			Q.push(Q.front());
			Q.pop();
		}
		
		printf("Discarded cards: ");
		for(int i=0;i<data.size();i++)
		{
			printf("%d",data[i]);
			if(i!=data.size()-1) printf(", ");
		}
		printf("\n");
		printf("Remaining card: %d\n",Q.front());
		
		Q.pop();
		data.clear();
		
		cin>>n;
	}
	
	return 0;
}
