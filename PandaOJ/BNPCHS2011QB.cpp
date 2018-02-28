#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a,b,c;
	int bil,flag,sum;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		flag = 0;
		sum = 0;
		scanf("%d %d",&b,&c);
		for(int j=0;j<b;j++){scanf("%d",&bil); if(bil==0) flag=1;} 
		
		for(int j=1;j<=c;j++){sum=sum+pow(b,j);}
		int x=pow(b,c);
		if(flag==1) printf("%d\n",x);
		else printf("%d\n",sum);
		
	}
	
	return 0;
}
