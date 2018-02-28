#include <bits/stdc++.h>
using namespace std;

int qwe[1000000];
 
void SieveOfEratosthenes(int n)
{
	int i=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p=2; p<=n; p++)
    {
    	if (prime[p])
    	{
    		qwe[i]=p;
    		i++;
		}	
	}
}
 

int main()
{
    int a,b;
    
    SieveOfEratosthenes(77777);
    
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		printf("%d\n",qwe[b-1]);
	}
    return 0;
}
