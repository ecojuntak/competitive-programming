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
	int qwe[]={0,1,2,3,4,5,6,7,8,9};
	int co=0;
	int digit = 2;
	do{
		bool flag = true;
		for(int i=0;i<digit-1;i++)
		{
			if(abs(qwe[i]-qwe[i+1])!=1)
			{
				flag = false;
				break;
			}
		}
		
		if(flag)
		{
			for(int i=0;i<digit;i++)
			{
				printf("%d ",qwe[i]);	
			}
			printf("\n");
			
		}
	}while(next_permutation(qwe,qwe+digit));
	
	return 0;
}
