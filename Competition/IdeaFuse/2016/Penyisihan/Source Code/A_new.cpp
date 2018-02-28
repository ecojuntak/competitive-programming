#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <iostream>

using namespace std;

int main()
{
	typedef pair<int, int> pairs;
	set<pairs> result;
	pairs m;
	set<pairs>::iterator it;
	int x,y;
	int qwe[8]={1,2,3,4,5,6,7,8};
	
	
	while(scanf("%d %d",&x,&y)==2)
	{
	
		do{
			if(qwe[0]+qwe[1]+qwe[2]==x && qwe[3]+qwe[4]+qwe[5]==y)
				result.insert(make_pair(min(qwe[6],qwe[7]),max(qwe[6],qwe[7])));
		}while(next_permutation(qwe,qwe+8));
	
		for(it=result.begin();it!=result.end();it++)
		{
			m = *it;
			printf("%d %d\n",m.first,m.second);
		}
		result.clear();
	}
	
	return 0;
}
