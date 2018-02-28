#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	char qwe[109];
	char asd[109];
	
	scanf("%s %s",&qwe,&asd);
	strrev(asd);
	if(strcmp(qwe,asd)==0) printf("YES\n");
	else printf("NO\n");	
	return 0;
}
