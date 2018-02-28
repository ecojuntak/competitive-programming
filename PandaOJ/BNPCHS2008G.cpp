#include <bits/stdc++.h>

using namespace std;

int data[10009];

void generate(int b)
{
	for(int i=0;i<b;i++)
		data[i]=i+1;
}

int main()
{
	int a,b;
	int qwe[10009];
	int total;
	vector <int> result;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		generate(b);
		total = 0;
		int min=999999;
		for(int j=0;j<b;j++)
			scanf("%d",&qwe[j]);
		
		sort(qwe,qwe+b);
		
		for(int j=0;j<b;j++)
		{
//			printf("%d - %d = %d\n",qwe[j],data[j],(abs)(qwe[j] - data[j]));
			total += (abs)(qwe[j]-data[j]);
//			if(total<min) min=total;
		}
		printf("%d\n",total);
	}
	
	return 0;
}
