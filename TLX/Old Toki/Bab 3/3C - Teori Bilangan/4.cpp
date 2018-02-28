#include <bits/stdc++.h>

using namespace std;

int gcdr (int a, int b)
{
  if(a==0) return b;
  return gcdr (b%a,a);
}


int main()
{
	unsigned long long int a,b,c,d,e,f,x;
	
	scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
	
	e = (a*d) + (b*c);
	f = b*d;
	
	
	while(gcdr(e,f)!=1)
	{
		x = gcdr(e,f);
		e = e/x;
		f = f/x;
	}
	
	printf("%llu %llu\n",e,f);

	return 0;
}
