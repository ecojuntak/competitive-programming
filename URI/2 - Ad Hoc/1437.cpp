#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int n;
	char com[1009];
	scanf("%d",&n);
	
	while(n!=0)
	{
		char hdp='N';
			scanf("%s",&com);
			for(int j=0;j<n;j++)
			{
				if(hdp=='N')
				{
					if(com[j]=='E') hdp='O';
					else hdp='L';
				}
				else if(hdp=='L')
				{
					if(com[j]=='E') hdp='N';
					else hdp='S';
				}
				else if(hdp=='S')
				{
					if(com[j]=='E') hdp='L';
					else hdp='O';
				}
				else if(hdp=='O')
				{
					if(com[j]=='E') hdp='S';
					else hdp='N';
				}
			}			
		
		printf("%c\n",hdp);
		scanf("%d",&n);
	}
	
	return 0;
}
