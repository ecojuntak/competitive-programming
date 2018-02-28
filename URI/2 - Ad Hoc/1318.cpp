#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	int qwe[10009];
	int asd[10009]={0};
	int count=0;
	
	scanf("%d %d",&a,&b);
	
	while(true)
	{	
		if(a==0 || b==0)
			break;
		else 
			for(int i=0;i<b;i++)
				scanf("%d",&qwe[i]);
		
		sort(qwe,qwe+b);
		
		for(int i=0;i<b;i++)
			if(qwe[i]==qwe[i+1] && qwe[i]<=a && asd[i]==false) 
			{
				asd[i]=1;
				count++;	
			}
		
		printf("%d\n",count);
		count = 0;
		scanf("%d %d",&a,&b);
	}
	
	return 0;
}
