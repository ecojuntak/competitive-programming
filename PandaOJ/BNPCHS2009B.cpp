#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char asd[100];
	int a,b,c;
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		scanf("%s",asd);
		for(c=0;c<strlen(asd);c++)
		{
			if(c%2==0)
			{
				int x=asd[c]-32;
				printf("%c",x);
			}
			else if(c%2==1)
			{
				printf("%c",asd[c]);
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
