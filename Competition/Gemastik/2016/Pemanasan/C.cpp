#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	char qwe[1005],asd[1005];
	cin>>t;
	
	while(t--)
	{
		int count=0;
		cin>>n;
		scanf("%s",&qwe);
		scanf("%s",&asd);
		
		for(int i=0;i<n;i++)
		{
			if(qwe[i]=='1')
			{
				if(asd[i]=='1') asd[i]='0';
				else if(qwe[i+1]=='1') qwe[i+1]='0';
				else if(asd[i+1]=='1') asd[i+1]='0';
				count++;
			}
			else if(asd[i]=='1')
			{
				if(qwe[i]=='1') qwe[i]='0';
				else if(asd[i+1]=='1') asd[i+1]='0';
				else if(qwe[i+1]=='1') qwe[i+1]='0';
				count++;
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}
