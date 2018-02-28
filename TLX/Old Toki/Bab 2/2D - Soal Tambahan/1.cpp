#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a,b,count;

	scanf("%lld",&a);

	for(int i=0;i<a;i++)
	{
		count = 0;
		scanf("%lld",&b);
		for(int j=1;j<=sqrt(b)+1;j++)
		{
			if(b%j==0) count++;
			if(count > 4)
			{
				printf("TIDAK\n");
				break;
			}
		}
		if(count <= 4)printf("YA\n");
	}

	return 0;
}
