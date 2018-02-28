#include <bits/stdc++.h>

using namespace std;

int main()
{
	char qwe[14];
	int t;
	
	cin>>t;
	
	while(t--)
	{
		scanf("%s",&qwe);
		sort(qwe,qwe+strlen(qwe));
		do{
			printf("%s\n",qwe);	
		}while(next_permutation(qwe,qwe+strlen(qwe)));
		printf("\n");
	}
	
	return 0;
}
