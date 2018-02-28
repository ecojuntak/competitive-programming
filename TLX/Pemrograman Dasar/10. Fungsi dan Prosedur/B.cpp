#include <bits/stdc++.h>

using namespace std;

int AA[1005],BB[1005];

void swap(string a, int x, string b, int y)
{
	if(a=="A" && b=="A")
	{
		int temp = AA[x];
		AA[x] = AA[y];
		AA[y] = temp; 
	}
	else if(a=="B" && b=="B")
	{
		int temp = BB[x];
		BB[x] = BB[y];
		BB[y] = temp; 
	}
	else if(a=="A" && b=="B")
	{
		int temp = AA[x];
		AA[x] = BB[y];
		BB[y] = temp; 
	}
	else if(a=="B" && b=="A")
	{
		int temp = BB[x];
		BB[x] = AA[y];
		AA[y] = temp; 
	}
}

int main()
{
	int n,q,x,y;
	string a,b;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
		scanf("%d",&AA[i]);
	
	for(int i=0;i<n;i++)
		scanf("%d",&BB[i]);
	
	cin>>q;
	
	for(int i=0;i<q;i++)
	{
		cin>>a;
		cin>>x;
		cin>>b;
		cin>>y;
		
		swap(a,x-1,b,y-1);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d",AA[i]);
		if(i!=n-1) printf(" ");
	}
	
	printf("\n");
	
	for(int i=0;i<n;i++)
	{
		printf("%d",BB[i]);
		if(i!=n-1) printf(" ");
	}
	
	printf("\n");
	
	return 0;
}
