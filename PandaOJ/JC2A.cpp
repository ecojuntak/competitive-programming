#include <cstdio>

using namespace std;

int qwe(int temp,int data)
{
	return temp=temp-data;	
}

//int rec(int temp,int data)
//{
//	return temp=temp-data;
//}

int main()
{
	int a;
	int n,m,x;
	int temp;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int satu,dua,awal;
		scanf("%d %d %d",&n,&m,&x);
		temp=x;
		while(temp>0)
		{
			if(temp%m==0) temp=qwe(temp,m);
			else if (temp%n==0) temp=qwe(temp,n);
			else if (temp%m!=0 && temp%n!=0) 
			{
				awal=temp;
				temp=qwe(temp,m);
				satu=temp;

				//temp=awal;
				//temp=qwe(temp,m);
				//dua=temp;
	
			}
		}
		if(temp==0) printf("Kasus #%d: YA\n",i);
		else printf("Kasus #%d: TIDAK\n",i);
	}
	
	return 0;
}
