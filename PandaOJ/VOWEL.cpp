#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int i;
	scanf("%d",&i);
	while(getchar()!='\n');
	
	for(int a=1;a<=i;a++)
	{
		char qwe[100005];
		int sum=0;
		
		gets(qwe);
		
		for(int b=0;b<strlen(qwe);b++)
		{
			if(qwe[b]=='a' || qwe[b]=='A' || qwe[b]=='e' || qwe[b]=='E' || qwe[b]=='i' || qwe[b]=='I' || qwe[b]=='o' || qwe[b]=='O' || qwe[b]=='u' || qwe[b]=='U')
			{
				sum++;
			}
		}
		printf("Kasus #%d: %d\n",a,sum);
	}
	
	return 0;
}
