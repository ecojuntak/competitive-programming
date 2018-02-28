#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int qwe[5];
	int j;
	
	scanf("%d",&j);
	for(int k=1;k<=j;k++)
	{
		for(int m=0;m<5;m++)
		{
			scanf("%d",&qwe[m]);
		}
		sort(qwe,qwe+5);
		
		int n=qwe[4];
			
		while(qwe[4]%qwe[0]!=0 || qwe[4]%qwe[1]!=0 || qwe[4]%qwe[2]!=0 || qwe[4]%qwe[3]!=0)
		{

			qwe[4]=qwe[4]+n;
		}
		printf("Case #%d: %d\n",k,2000+qwe[4]);
	}
	
	return 0;
}
