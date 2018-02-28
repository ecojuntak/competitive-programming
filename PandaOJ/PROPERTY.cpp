#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a;
	unsigned long long int qwe[1009];
	unsigned long long int total=0;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%llu",&qwe[i]);
		total=total+qwe[i];
	}
	
	sort(qwe,qwe+a);

	int i=0;
	int ave=total/a;
	
	for(int i=a-1;i>=0;i--)
	{
		if(qwe[i]<=ave)
		{
			printf("%d\n",qwe[i]);
			break;
		}
	}
	
	return 0;
}
