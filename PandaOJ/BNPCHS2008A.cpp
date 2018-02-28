#include <cstdio>
#include <cstring>
#include <set>
using namespace std;

int main()
{
	char kamus[205];
	int sum=0, i;
	scanf("%d",&i);
	
	for(int a=0;a<i;a++)
	{
		set <int> asd;
		char hasil[26];
		scanf("%s",kamus);
		for(int b=0;b<strlen(kamus);b++)
		{	
			asd.insert(kamus[b]);		
		}
	
		printf("%d\n",asd.size());
	}
	return 0;
}
