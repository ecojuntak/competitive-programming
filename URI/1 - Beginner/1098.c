#include <stdio.h>

int main(){
	float i=0,j=0,x,y,k=0;
	
	while (i<=2.2)
	{
		for (x=1;x<=3;x++)
		{
			if(k==0) printf("I=%.f J=%.f\n",i,x+y);
			else printf("I=%.1f J=%.1f\n",i,x+y);
		}		
		i+=0.2;
		y+=0.2;
		k++;
		if(k==5) k=0;
	}
	
	return 0;
}

