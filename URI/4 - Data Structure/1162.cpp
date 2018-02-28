#include <bits/stdc++.h>

using namespace std;

int qwe[51];
int n;

int selection()
{
	int temp,co=0;
	
	for (int i = 0; i < n; i++)
	{
		int j = i;
		
		while (j > 0 && qwe[j] < qwe[j-1])
		{
			temp = qwe[j];
			qwe[j] = qwe[j-1];
			qwe[j-1] = temp;
		  	j--;
		  	co++;
		}
	}
	
	return co;
}

int main()
{
	int t,co;
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		
		for(int i=0;i<n;i++)
			scanf("%d",&qwe[i]);
		
		co = selection();
		
		printf("Optimal train swapping takes %d swaps.\n",co);
	}

	return 0;
}
