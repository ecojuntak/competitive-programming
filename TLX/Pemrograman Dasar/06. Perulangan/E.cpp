#include <bits/stdc++.h>

using namespace std;

long long int power(int a,int b)
{
	long long int total = 1;
	for(int i=1;i<=b;i++)
		total *= a;
	
	return total;
}

int main()
{
	long long int a;
	
	scanf("%lld",&a);
	
	int i,flag=0;
	if(a==1) printf("ya\n");
	else
	{
	for(i=1;i<=16;i++)
	{
		if(a == power(2,i))
		{
			flag = 1;
			printf("ya\n");
			break;
		}
	}
	
	if(flag==0) printf("bukan\n");
	}
	return 0;
}
