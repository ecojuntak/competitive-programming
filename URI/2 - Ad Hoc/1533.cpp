#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	int qwe[1009];

	scanf("%d",&a);

	while(1)
	{
		if(a==0) break;
		for(int i=1;i<=a;i++) scanf("%d",&qwe[i]);
		sort(qwe,qwe+a+1);
		for(int i=1;i<=a;i++)
		{
			if(qwe[i]!=i)
			{
				printf("%d\n",i);
				break;
			}
		}
		scanf("%d",&a);
	}

	return 0;
}
