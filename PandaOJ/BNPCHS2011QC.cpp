#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs;   
vi primes; 
vi factor;

void sieve(ll upperbound) {          
  _sieve_size = upperbound + 1;                   
  bs.set();                                                 
  bs[0] = bs[1] = 0;                                  
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i); 
} } 

bool isPrime(ll N) {                 
  if (N <= _sieve_size) return bs[N];   
  for (int i = 0; i < (int)primes.size(); i++)
    if (N % primes[i] == 0) return false;
  return true;        
}

void findFactor(int j)
{
	for(int i=2;i<j;i++)
	{
		if(j%i==0) factor.push_back(i);
	}
}

int main()
{
	sieve(10000);
	
	int t,a,b,count;
	vi::iterator it;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		count = 0;
		scanf("%d %d",&a,&b);
		for(int j=a;j<=b;j++)
		{
			findFactor(j);
//			printf("factor of %d is ",j);
//			for(it = factor.begin();it!=factor.end();it++)
//				printf("%d ",*it);
//			printf("\n");
			
			int x=0;
			for(it = factor.begin();it!=factor.end();it++)
			{
				if(isPrime(*it))
				{
//					printf("\t%d is prime\n",*it);
					x++;
				}
			}
//			printf(">>>> x = %d dan size = %d \n",x,factor.size());
			if(x==factor.size() && factor.size()!=0) count++;
			factor.clear();
		}
		printf("%d\n",count);
	}
	
	return 0;
}
