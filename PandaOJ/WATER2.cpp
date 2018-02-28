#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a,b,c,d,e;
	vector <int> data;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&c);
			data.push_back(c);
		}
		sort(data.begin(),data.end());
		
		scanf("%d",&d);
		printf("Kasus #%d:\n",i);
		for(int j=0;j<d;j++)
		{
			scanf("%d",&e);
			if(binary_search(data.begin(),data.end(),e)) printf("ADA\n");
			else printf("TIDAK ADA\n");
		}
		data.clear();
	}
	
	return 0;
}
