#include <bits/stdc++.h>

using namespace std;

int main()
{
	char qwe[10009];
	char *asd[10009];
	char *result[10009];
	int i=0;
	
	gets(qwe);
	
	asd[i] = strtok(qwe," ");
	
	while(asd[i]!=NULL)
		asd[++i] = strtok(NULL," ");
		
	int count = 0;
	
	for(int j=0;j<i;j++)
	{
		int x = strlen(asd[j])-1;
		int y = x;
		int flag = 0;
	//	printf("panjag ==== > %d\n",x);
		for(int k=0;k<=x;k++)
		{
	//		printf("%c - %c\n",asd[j][k],asd[j][y]);
			if(asd[j][k]!=asd[j][y]) break;
			y--;
			flag++;
		}
	//	printf("flag %d >>>> %d\n",flag-1,x);
		if(flag-1==x) 
		{
	//		printf("...");
			result[count]=asd[j]; count++;
		}
	}
	
	for(int j=0;j<count;j++)
	{
		printf("%s",result[j]);
		if(j!=count-1) printf(" ");
	}
	printf("\n");
	
	return 0;
}
