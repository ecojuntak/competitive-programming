#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> left, pair<int,int> right)
{
	if(left.first == right.first) return left.second < right.second;
	else return left.first > right.first;
}

int main()
{
	int a,b,c,d;
	vector <pair <int,int> > qwe;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		for(int k=0;k<b;k++)
		{
			scanf("%d %d",&c,&d);
			qwe.push_back(make_pair(c,d));
		}
		
		sort(qwe.begin(),qwe.end(),compare);
		
		for(int k=0;k<b;k++)
		{
			printf("%d %d\n",qwe[k].first,qwe[k].second);
		}
		printf("\n");
		qwe.clear();
	}
	
	return 0;
}
