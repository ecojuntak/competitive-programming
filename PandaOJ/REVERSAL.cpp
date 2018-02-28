#include <cstdio>

using namespace std;

int main()
{
	int arr[100000];
	int i,j;
	
	scanf("%d",&i);
	
	for(j=0;j<i;j++)
	{
		scanf("%d",&arr[j]);
	}

	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
		if(j!=0)
		{
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
