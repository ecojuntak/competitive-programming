#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,bil,maks=0,mod=0;
	int qwe[100005]={0};
	
	cin>>a;
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&bil);
		if(maks<bil) maks=bil;
		qwe[bil]++;
		if(qwe[bil]>mod) mod=qwe[bil];
	}
	
	for(int i=maks;i>=0;i--)
	{
		if(qwe[i]==mod)
		{
			mod = i;
			break;
		}
	}
	
	printf("%d\n",mod);
	
	return 0;
}
