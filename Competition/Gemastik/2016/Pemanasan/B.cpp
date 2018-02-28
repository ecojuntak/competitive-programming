#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,m,idx;
	string temp;
	vector <int> bil;
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		vector <string> kata(1001,"");
		scanf("%d %d",&n,&m);
		
		for(int j=0;j<m;j++)
		{
			scanf("%d",&idx);
			cin>>temp;
			kata[idx] = temp;
			bil.push_back(idx);
		}
		
		for(int j=1;j<=n;j++)
		{
			bool flag = false;
			for(int k=0;k<bil.size();k++)
			{
				if(j%bil[k]==0) 
				{
					cout<<kata[bil[k]];
					flag = true;
//					printf("found! >>> j mod k = %d mod %d",j,bil[k]);
				}	
			}
			if(flag) printf("\n");
			else printf("%d\n",j);
		}
		
		kata.clear();
		bil.clear();
	}
	
	return 0;
}
