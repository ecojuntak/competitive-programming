#include <bits/stdc++.h>

using namespace std;

int qwe[20];

void generate(int m)
{
	for(int i=0;i<m;i++)
		qwe[i] = i+1;	
}

int main()
{
	int t,m,n;
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		generate(m);
		int c=1;
		do{
			if(c==n) break;
			c++;
		}while(next_permutation(qwe,qwe+m));
		
		for(int j=0;j<m;j++)
		{
			printf("%d",qwe[j]);
			if(j!=m-1) printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
