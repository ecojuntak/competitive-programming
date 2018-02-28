#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[109]={'.'};
	char asd[109]={'.'};
	int wkwk[109],j=0,sum=0;
	
	scanf("%s",&qwe);
	scanf("%s",&asd);
	
	if(strlen(qwe)>strlen(asd))
	{
		for(int i=0;i<strlen(qwe);i++)
		{
			if(qwe[i]!=asd[i]) 
			{
				wkwk[j]=i+1;
				j++;
				sum++;	
			}
		}
	}
	else
	{
		for(int i=0;i<strlen(asd);i++)
		{
			if(qwe[i]!=asd[i])
			{
				wkwk[j]=i+1;
				j++;
				sum++;	
			}
		}
	}
	
	
	printf("%d\n",sum);
	for(int i=0;i<sum;i++)
	{
		printf("%d",wkwk[i]);
		if(i!=sum-1) printf(" ");
	}
	printf("\n");
	return 0;
}
