#include <bits/stdc++.h>

using namespace std;

int gcdr (int a, int b)
{
  if(a==0) return b;
  return gcdr (b%a,a);
}

int main()
{
	int a;
	long long int x,y;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%lld %lld",&x,&y);
		printf("%d\n",gcdr(x,y));
	}
	
	return 0;
}
