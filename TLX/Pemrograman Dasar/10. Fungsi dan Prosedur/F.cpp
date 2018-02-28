#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> ii;

int n,d;

int power(int a,int b)
{
	int total = 1;
	
	for(int i=0;i<b;i++)
		total *= a;
		
	return total;
}

int fuc(ii a,ii b)
{
	int temp;
	temp = power(abs(b.first - a.first),d) + power(abs(b.second - a.second),d);
	
	return temp;
}

int main()
{
	ll x,y;
	vector <ii> data;
	int mins=INT_MAX, maks=INT_MIN,temp;
	cin>>n>>d;
	
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		data.push_back(make_pair(x,y));
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(i!=j)
			{
//				printf("%d,%d dan %d,%d\n",data[i].first,data[i].second,data[j].first,data[j].second);
				temp = fuc(data[i],data[j]);
				if(temp < mins) mins = temp;
				if(temp > maks) maks = temp;
			}
		}
	}
	
	printf("%d %d\n",mins,maks);
	
	return 0;
}
