#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(b%2==1) printf("1\n");
		else printf("0\n");
	}
	
	return 0;
}
