#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	int qwe[1000];
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
		scanf("%d",&qwe[i]);
	
	sort(qwe,qwe+a);
	
	printf("%d %d\n",qwe[a-1],qwe[0]);
	
	return 0;
}
