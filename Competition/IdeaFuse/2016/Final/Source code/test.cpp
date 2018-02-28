#include<bits/stdc++.h>

using namespace std;
int main()
{
	pair<int , pair<int,int> > pipi;
	pair<int,int>pii;
	vector<pair<int , pair<int,int> > > vpipi;
	int a , b, c;
	for(int i=0 ;i<=5;i++)
	{
		cin>>a>>b>>c;
		pipi = make_pair(a,make_pair(b,c));
		vpipi.push_back(pipi);
	}
	sort(vpipi.begin(),vpipi.end());
	for(int i=0 ;i<=5;i++)
	{
		pipi =vpipi[i];
		pii = pipi.second;
		
	}
	return 0;
}
