#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,co=0;
	int awal[50005], akhir[50005], hash[50005];
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&akhir[i]);
		hash[akhir[i]]=i;
	}
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&awal[i]);
	}

	
//	printf("\n");
	
	for(int i=1;i<=n;i++)
	{
		if(akhir[i]!=awal[i])
		{
			co++;
			int x = akhir[i];
			int y = awal[i];
			
//			printf("%d %d\n",x,y);
			swap(akhir[i],akhir[hash[awal[i]]]);

			swap(hash[x],hash[y]);
			
//			printf("%d %d\n",hash[x],hash[y]);
			
			
//			for(int i=1;i<=n;i++)
//			{
//				printf("%d ",hash[akhir[i]]);
//			}
//			printf("\n");
		}
	}

//	printf("\n");
	
	
	printf("%d\n",co);
	
	return 0;
}
