#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	double total=0, data[10009], rata, total2=0,sds;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&data[i]);
		total += data[i];
	}
	
	sort(data,data+n);
	rata = total/n;
	
	for(int i=0;i<n;i++)
	{
		total2 += pow(data[i]-rata,2);
	}
	
	sds = total2/(n-1);
	
	printf("%.2lf %.2lf %.2lf %.2lf\n",data[0],data[n-1],rata,sqrt(sds));
	return 0;
}
