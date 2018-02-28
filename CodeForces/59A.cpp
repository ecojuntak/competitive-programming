#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char kata[109];
	int lwr=0, upr=0;
	
	scanf("%s",&kata);
	for(int i=0;i<strlen(kata);i++)
	{
		if(kata[i]>='A' && kata[i]<='Z') upr++;
		else if (kata[i]>=97 && kata[i]<=122)lwr++;
	}
	
	if(lwr>upr) printf("%s\n",strlwr(kata));
	else if (lwr<upr) printf("%s\n",strupr(kata));
	else if (lwr==upr) printf("%s\n",strlwr(kata));
	
	return 0;
}
