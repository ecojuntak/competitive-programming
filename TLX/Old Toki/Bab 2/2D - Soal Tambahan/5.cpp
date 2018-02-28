#include <bits/stdc++.h>

using namespace std;

int main()
{
	double qwe[10005],sum=0;
	int a;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%lf",&qwe[i]);
		sum += qwe[i];	
	}
	
	sort(qwe,qwe+a);
	
	printf("%.2lf %.2lf %.2lf\n",qwe[0],qwe[a-1],(sum/a));
	return 0;
}
