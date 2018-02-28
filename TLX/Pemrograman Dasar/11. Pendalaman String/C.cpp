#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[105];
	int n,temp;
	
	cin>>a>>n;
	
	for(int i=0;i<strlen(a);i++)
	{
		temp = n+a[i];
		if(temp>122) temp = temp-26;
		printf("%c",temp);
	}
	
	printf("\n");
	
	return 0;
}
