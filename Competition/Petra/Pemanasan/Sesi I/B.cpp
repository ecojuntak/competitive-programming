#include <bits/stdc++.h>

using namespace std;

int main()
{
	int fib[10000];
	int a;
	
	fib[0]=1;
	fib[1]=1;
	
	while(scanf("%d",&a)!=EOF)
	{
		for(int i=0;i<a;i++)
		{
			if(i==0 || i==1) printf("1");
			else 
			{
				fib[i] = fib[i-1] + fib[i-2];
				
				printf("%d",fib[i-1]+fib[i-2]);	
			}
			if(i!=a-1) printf(" ");
		}
		
		printf("\n");
	}
	
	
	return 0;
}
