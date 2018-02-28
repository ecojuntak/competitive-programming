#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a,sum=0;
	char qwe[100005],x;
	
	scanf("%s",&qwe);
	while(getchar()!=' ');
	scanf("%c",&x);

	for(int i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]==x)
		{
			sum++;
		}
	}
	printf("%d\n",sum);
	return 0;
}
