//PENGEN MASUK FINAL
//PENGEN JALAN JALAN
//NGGAKN MAU STRES
//TOLONG GUYS!
#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007

typedef long long int ll;

// Prototype of a utility function that returns minimum of two integers
int min(int a, int b);

// Returns value of Binomial Coefficient C(n, k)
ll binomialCoeff(ll n, ll k)
{
    ll res = 1;
    if ( k > n - k )
        k = n - k;

    for (ll i = 0; i < k; ++i)
    {
//        res *= (n-i);
        res = ((res%mod)*((n-1)%mod))%mod;
        res /= (i+1);
        //res = ((res%mod)((i+1)%mod))%mod;
    }

    return res;
}

// A utility function to return minimum of two integers
int min(int a, int b)
{
    return (a<b)? a: b;
}

long long int power(long long int a, long long b)
{
	long long int temp = 1;
	
	for(int i=0;i<b;i++)
	{
		temp = ((temp%mod)*(a%mod))%mod;
	}
	
	return temp;
}

/* Drier program to test above function*/
int main()
{
    long long int N,Q,B,A;
    long long int jumlah=0;
    cin>>N>>Q;

    jumlah = power(2,N)-1;

    while(Q--){
        cin>>A>>B;
        jumlah -=  binomialCoeff(B, A);
    }

    cout<<jumlah%mod<<endl;
    return 0;
}

//PENGEN MASUK FINAL
