#include <stdio.h>
#include <string.h>

int main()
{
	char ini[10000];
	int i,j,k,m;
	
	scanf("%d",&i);
	while(getchar()!='\n');
	
	for(j=1;j<=i;j++)
	{
		int x=0;
		scanf("%s",ini);
		k=strlen(ini);
		for(m=0;m<k;m++)
		{
			if(ini[m]=='1')
			{
				x=x+2;
			}
			else if(ini[m]=='2')
			{
				x=x+5;
			}
			else if(ini[m]=='3')
			{
				x=x+5;
			}
			else if(ini[m]=='4')
			{
				x=x+4;
			}
			else if(ini[m]=='5')
			{
				x=x+5;
			}
			else if(ini[m]=='6')
			{
				x=x+6;
			}
			else if(ini[m]=='7')
			{
				x=x+3;
			}
			else if(ini[m]=='8')
			{
				x=x+7;
			}
			else if(ini[m]=='9')
			{
				x=x+6;
			}
			else if(ini[m]=='0')
			{
				x=x+6;
			}
		}
		printf("%d leds\n",x);
	}
	
	return 0;
}
