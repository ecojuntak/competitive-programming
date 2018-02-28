#include <bits/stdc++.h>

using namespace std;

int StringToInt(char a){
    char x[1]; 
	int res;
   	x[0]=a;
	sscanf(x,"%d",&res);
    return res;
}


int main()
{
	int a,de,be;
	char qwe[5];
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%s",&qwe);
		de=StringToInt(qwe[0]);
		be=StringToInt(qwe[2]);
		
		if(be==de) printf("%d\n",be*de);
		else if(qwe[1]>=65 && qwe[1]<=90) printf("%d\n",be-de);
		else printf("%d\n",de+be);
	}
	
	return 0;
}
