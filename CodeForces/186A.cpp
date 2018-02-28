#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char qwe[100009],asd[100009];
	
	scanf("%s %s",&qwe,&asd);
	
	if(strcmp(qwe,strrev(asd))==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
