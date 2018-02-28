#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,d;
	float rata,qwe[10001];
	
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		int n=0, anak=0;
		float total=0;
		scanf("%d",&c);
		for (d=0;d<c;d++)
		{
			scanf("%f",&qwe[d]);
			n++;
			total = total + qwe[d];
		}
		rata = total/n;
		for (d=0;d<c;d++)
		{
			if(qwe[d]<rata)
			{
				anak++;
			}
		}	
		printf("%d\n",anak);	
	}
	
	return 0;
}
