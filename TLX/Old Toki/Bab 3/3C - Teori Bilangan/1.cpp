#include <cstdio>
#include <cmath>

int qwe[78499]={0};
int count=0;

void primeFactors(int n)
{
	
    while (n%2 == 0)
    {
    	qwe[2]++;
    	count++;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
        	qwe[i]++;
        	count++;
            n = n/i;
        }
    }
 
    if (n > 2)
    {
    	qwe[n]++;
		count++;	
	}
}
 
int main()
{
    int n;
    
    scanf("%d",&n);
    primeFactors(n);
    
    for(int i=1;i<=78499;i++)
    {
    	if(qwe[i]>0) 
		{
			if(qwe[i]==1) printf("%d ",i);
			else printf("%d %d",i,qwe[i]);
		}
	}
    return 0;
}
