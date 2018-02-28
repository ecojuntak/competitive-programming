#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[109];
	char asd[109];
	int x=0,y=0;
	scanf("%s",&qwe);
	scanf("%s",&asd);
	strlwr(qwe);
	strlwr(asd);
	
	if(strcmp(qwe,asd)<0) printf("-1\n");
	else if(strcmp(qwe,asd)>0) printf("1\n");
	else if(strcmp(qwe,asd)==0) printf("0\n");
	
	return 0;
}
