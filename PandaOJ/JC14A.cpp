#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a;
	int qwe[100009];
	int temp,x=1;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
		scanf("%d",&qwe[i]);
	
	sort(qwe,qwe+a);
	
	temp=qwe[a-1];
	
	for(int i=a-1;i>=0;i--)
	{
		if(qwe[i]==temp || qwe[i]==temp-1 || qwe[i]==temp-2) continue;
		else
		{
			x++;
			temp=qwe[i];
		}
	}
	
	printf("%d\n",x);
	
	return 0;
}
