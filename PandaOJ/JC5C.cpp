#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[1005];
	int a;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		scanf("%s",&qwe);
	
		int c=strlen(qwe);
		while(getchar()!='\n');
		printf("Case #%d: ",i);
		for(int i=0;i<c;i++)
		{
			switch(qwe[i])
			{
				case 'A': printf("2");break;
				case 'B': printf("22");break;
				case 'C': printf("222");break;
				case 'D': printf("3");break;
				case 'E': printf("33");break;
				case 'F': printf("333");break;
				case 'G': printf("4");break;
				case 'H': printf("44");break;
				case 'I': printf("444");break;
				case 'J': printf("5");break;
				case 'K': printf("55");break;
				case 'L': printf("555");break;
				case 'M': printf("6");break;
				case 'N': printf("66");break;
				case 'O': printf("666");break;
				case 'P': printf("7");break;
				case 'Q': printf("77");break;
				case 'R': printf("777");break;
				case 'S': printf("7777");break;
				case 'T': printf("8");break;
				case 'U': printf("88");break;
				case 'V': printf("888");break;
				case 'W': printf("9");break;
				case 'X': printf("99");break;
				case 'Y': printf("999");break;
				case 'Z': printf("9999");break;
			}
			if(i!=c-1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
