#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[10005], asd[10005];
	char *hasil[10000];
	scanf("%s",&qwe);
	scanf("%s",&asd);
	
	hasil=strstr(asd,qwe);
	
	printf("%s",*hasil);
	
	return 0;
}
