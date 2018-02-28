#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int x, y;
	int k, i;
	char s[1000];

	scanf("%d %d", &x, &y);
	int sumX=x, sumY=y;
	scanf("%s", &s);
	scanf("%d", &k);
	for(i=0; i<k; i++){
		if(s[i]=='>'){
			sumX++;
		}
		else if(s[i]=='<'){
			sumX--;
		}
		else if(s[i]=='V'){
			sumY--;
		}
		else if(s[i]=='^'){
			sumY++;
		}
	}
	printf("%d,%d\n", sumX, sumY);

	return 0;
}
