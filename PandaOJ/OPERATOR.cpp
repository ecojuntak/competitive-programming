#include <bits/stdc++.h>

int main()
{
	int a,b;
	double c,d,f;
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		scanf("%lf %lf %lf",&c,&d,&f);
		{
			printf("Kasus #%d: ",b);
			if(c+d==f)
			{
				printf("+\n");
			}
			else if(c-d==f)
			{
				printf("-\n");
			}
			else if(c*d==f)
			{
				printf("*\n");
			}
			else if(c/d==f)
			{
				printf("/\n");
			}
			else
			{
				printf("TIDAK ADA SOLUSI\n");
			}
		}
	}
	
	return 0;
}
