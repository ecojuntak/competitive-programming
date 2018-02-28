#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i,n) for(int (i) = 0; (i) < (int)(n); (i)++)
#define pb push_back
#define mp make_pair
#define f first
#define s second

int main()
{
	int t;
	int a,b,c;
	int n;
	cin>>t;
	
	while(t--)
	{
		int mins=0, maks=0;
		
		cin>>n;
		
		while(n--)
		{
			cin>>a>>b>>c;
			int temp = min(a,b);
			temp = min(temp,c);
			mins += temp;
			
			temp = max(a,b);
			temp = max(temp,c);
			maks += temp;
		}
		
		printf("%d %d\n",mins,maks);
	}
	
	return 0;
}
