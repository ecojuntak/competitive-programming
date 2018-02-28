#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a;
	char kata[109];
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%s",&kata);
		int x=strlen(kata);
		if(x<=10) printf("%s\n",kata);
		else
		{
			printf("%c",kata[0]);
			printf("%d",x-2);
			printf("%c\n",kata[x-1]);
		}
	}
	
	return 0;
}
