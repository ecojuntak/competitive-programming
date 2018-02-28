#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	
	cin>>a>>b;
	
	for(int j=0;j<a.size();j++)
	{
		for(int i=0;i<a.size();i++)
		{
			if(a.substr(i,b.size())==b)
				a.erase(i,b.size());
		}
	}
	
	cout<<a<<endl;
	
	return 0;
}
