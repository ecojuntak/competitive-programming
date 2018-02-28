#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	map <string,string> data;
	map <string,string>::iterator pos;
	string na,no;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		cin>>na>>no;
		data[na] = no;
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>na;
		
		pos = data.find(na);
		
		if(pos!=data.end()) cout<<data[na]<<endl;
		else printf("NIHIL\n");
	}
	
	return 0;
}
