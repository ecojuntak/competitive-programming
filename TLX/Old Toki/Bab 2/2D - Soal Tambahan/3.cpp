#include <bits/stdc++.h>

using namespace std;

long long int mypow(int i)
{
	long long int sum=1;
	for(int j=1;j<=i;j++)
		sum=sum*2;
	return sum;
}

int main()
{
	long long int a;
	
	scanf("%lld",&a);
	
	for(int i=0;i<=20;i++)
	{
		if(mypow(i)==a)
		{
			printf("TRUE\n");
			break;
		}
		else if(mypow(i)>a) 
		{
			printf("FALSE\n"); break;	
		}
	}
	
	return 0;
}
