#include <cstdio>

using namespace std;

int main()
{
	int a;
	scanf("%d",&a);
	int x=a/2;
	
	if(a%2==1) printf("NO\n");
	else if(a==2) printf("NO\n");
	else if(a%2==0 && a!=2) printf("YES\n");

}
