#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,sisa;
	int qwe[10]={0};
	cin>>a>>b;
	
	sisa = 36-a-b;
	
	for(int i=1;i<=8;i++)
	{
		int temp=sisa-i;
		
		if(qwe[i]==0 && temp!=i && temp>0 && temp<9)
			{
				printf("%d %d\n",i,sisa-i);
				qwe[i]=1;
				qwe[temp]=1;
			}	
	}

	
	return 0;
}
