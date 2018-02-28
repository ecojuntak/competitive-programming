#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	char x;
	
	scanf("%d %c %d",&a,&x,&b);
	if(x=='+') printf("%d\n",a+b);
	else if(x=='-') printf("%d\n",a-b);
	else if(x=='*') printf("%d\n",a*b);
	else if(x=='<')
	{
		if(a-b>0) printf("salah\n");
		else if(a-b==0) printf("salah\n");
		else if (a-b<0) printf("benar\n");
	}
	else if(x=='>')
	{
		if(a-b>0) printf("benar\n");
		else if(a-b==0) printf("salah\n");
		else if (a-b<0) printf("salah\n");
	}
	else if(x=='=')
	{
		if(a-b>0) printf("salah\n");
		else if(a-b==0) printf("benar\n");
		else if (a-b<0) printf("salah\n");
	}
	
	return 0;
}
