#include <bits/stdc++.h>

using namespace std;

int x=0,satu=0;

int fib(int b)
{
//	printf("%d\n",x);
	x++;
	if(b==0) return 0;
	if(b==1)
	{
		satu++;
		return 1;
	}
	else return fib(b-1)+fib(b-2);
}

int main()
{
	int a,b;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		x=0;
		satu=0;
		
		fib(b);
		
		printf("fib(%d) = %d calls = %d\n",b,x-1,satu);
	}
	
	return 0;
}
