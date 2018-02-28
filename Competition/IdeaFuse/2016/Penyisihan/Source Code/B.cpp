#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a,count;
	long long int x,y,temp;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		count=0;
		int j=1;
		scanf("%lld %lld",&x,&y);
		
		temp = pow(j,3);
		
		while(true)
		{
			if(temp>=x && temp<=y) count++;
			j++;
			temp = pow(j,3);
			if(temp>y) break;
		}
		
		printf("Case #%d: %d\n",i,count);
	}
	
	return 0;
}
