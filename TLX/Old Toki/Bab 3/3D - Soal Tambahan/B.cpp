#include <bits/stdc++.h>

using namespace std;

int main()
{
	int uang[]={1,2,5,10,20,50,100,200,500,1000};
	int count[10]={0};
	int amount;
	
	scanf("%d",&amount);
	
	while(amount != 0)
	{
		if(amount >= uang[9])
		{
			count[9]++;
			amount -= uang[9];
		}
		else if(amount >= uang[8])
		{
			count[8]++;
			amount -= uang[8];
		}
		else if(amount >= uang[7])
		{
			count[7]++;
			amount -= uang[7];
		}
		else if(amount >= uang[6])
		{
			count[6]++;
			amount -= uang[6];
		}
		else if(amount >= uang[5])
		{
			count[5]++;
			amount -= uang[5];
		}
		else if(amount >= uang[4])
		{
			count[4]++;
			amount -= uang[4];
		}
		else if(amount >= uang[3])
		{
			count[3]++;
			amount -= uang[3];
		}
		else if(amount >= uang[2])
		{
			count[2]++;
			amount -= uang[2];
		}
		else if(amount >= uang[1])
		{
			count[1]++;
			amount -= uang[1];
		}
		else if(amount >= uang[0])
		{
			count[0]++;
			amount -= uang[0];
		}
	}
	
	for(int i=9;i>=0;i--)
	{
		if(count[i]!=0)
			printf("%d %d\n",uang[i],count[i]);
	}
	
	return 0;
}
