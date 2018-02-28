#include <bits/stdc++.h>

using namespace std;

typedef vector<pair <int,int> > vii;

int main()
{
	vii data1,data2,data3;
	int t,a,b,c;
	int x,y,z;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		data1.push_back(make_pair(a,i));
		data2.push_back(make_pair(b,i));
		data3.push_back(make_pair(c,i));
	}

	scanf("%d %d %d",&a,&b,&c);

	sort(data1.begin(),data1.end());
	for(int i=data1.size()-1;i>=data1.size()-a-1;i--)
	{
		if(i==data1.size()-a)
		{
			x=data1[i].first;
			data2.erase(data2.begin() + data1[i].second);
			data3.erase(data3.begin() + data1[i].second);
		}
	}

	sort(data2.begin(),data2.end());
	for(int i=data2.size()-1;i>=data2.size()-b-1;i--)
	{
		if(i==data2.size()-b)
		{
			y=data2[i].first;
			data3.erase(data3.begin() + data2[i].second);
		}
	}

	sort(data3.begin(),data3.end());
	for(int i=data3.size()-1;i>=data3.size()-c-1;i--)
	{
		if(i==data3.size()-c)
		{
			z=data3[i].first;
		}
	}

//	for(int i=0;i<data1.size();i++)
//		cout<<data2[i].first<<" "<<data2[i].second<<endl;

//	for(int i=0;i<data3.size();i++)
//		cout<<data3[i].first<<" "<<data3[i].second<<endl;

	printf("%d %d %d\n",x,y,z);
	return 0;
}
