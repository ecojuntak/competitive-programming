#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

vector <ll> data;

ll modular_pow(ll basis, ll pangkat, int mod)
{
    ll hasil = 1;
    while (pangkat > 0)
    {
        if (pangkat % 2 == 1)
            hasil = (hasil * basis) % mod;
        pangkat = pangkat >> 1;
        basis = (basis * basis) % mod;
    }
    return hasil;
}

int main()
{
	ll a,b,sum=0;
	
	for(ll i=1;i<=1000009;i++)
//		cout<<sum+=modular_pow(i,i,10)<<endl;
		data.push_back(sum+=modular_pow(i,i,10));
	
	scanf("%lld",&a);
	
	for(int i=0;i<a;i++)
	{
		ll sum=0;
		scanf("%lld",&b);
		
		printf("%lld\n",data[b-1]%10);
	}
	
	return 0;
}


