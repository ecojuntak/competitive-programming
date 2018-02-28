#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a,qwe[10005];
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%d",&qwe[i]);
	}
	
	sort(qwe,qwe+a+1);
	
	int x=1;
	
	for(int i=1;i<=10000;i++)
	{
		if(qwe[i]==qwe[i-1]) x--;
		if(qwe[i]!=x)
		{
			printf("%d\n",x);
			break;
		}
		x++;
	}
	
	return 0;
}
