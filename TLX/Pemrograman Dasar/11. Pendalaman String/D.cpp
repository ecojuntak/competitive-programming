#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c,d;
	
	cin>>a>>b>>c>>d;
	
	for(int i=0;i<a.size();i++)
	{
		if(a.substr(i,b.size()) == b) a.erase(i,b.size());
	}
	
	int pos = a.find(c) + c.size();

	a.insert(pos,d);
	
	cout<<a<<endl;
	
	return 0;
}
