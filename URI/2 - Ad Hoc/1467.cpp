#include <cstdio>

using namespace std;

int main()
{
	int n;
	int a,b,c;
	
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a==b && b==c) printf("*\n");
		else if (b==a && a!=c) printf("C\n");
		else if (a==c && c!=b) printf("B\n");
		else if (c==b && b!=a) printf("A\n");
		//scanf("%d %d %d",&a,&b,&c);
	}
	
	return 0;
}
