#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	bool snake = false;
	cin>>a;
	
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='_')
		{
			snake = true;
			break;	
		} 
	}
	
	if(snake)
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]=='_')
			{
				printf("%c",a[i+1]-32);
				i++;	
			}
			else printf("%c",a[i]);
		}
	}
	else
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>=65 && a[i]<=90)
			{
				printf("_%c",a[i]+32);
			}
			else printf("%c",a[i]);
		}
	}
	
	printf("\n");
	return 0;
}
