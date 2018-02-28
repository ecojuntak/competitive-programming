#include <cstdio>

using namespace std;

int main()
{
	char str[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
	int a;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		printf("%c",str[i]);
	}
	
	printf("\n");
	
	return 0;
}
