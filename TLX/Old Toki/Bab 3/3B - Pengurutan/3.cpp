#include <cstdio>

using namespace std;

int sort(int qwe[],int a)
{
	int count=0,temp,j;
	
	for (int i=0;i<a;i++)
	{
		j = i;
		
		while (j>0 && qwe[j] < qwe[j-1])
		{
			temp = qwe[j];
			qwe[j] = qwe[j-1];
			qwe[j-1] = temp;
		  	j--;
		  	count++;
		}
	}
	
	return count;
}

int main()
{
	int a, qwe[1005];
	int count;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
		scanf("%d",&qwe[i]);
		
	count = sort(qwe,a);
	printf("%d\n",count);
	return 0;
}
