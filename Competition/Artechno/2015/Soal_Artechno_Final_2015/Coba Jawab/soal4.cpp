#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[100009];
	int x=0;
	gets(qwe);
	
	for(int i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]=='(' && qwe[i+1]==39) x=1;
		else if(qwe[i]==')' && qwe[i-1]==39) x=0;
		
		if(x==0)
		{
			switch(qwe[i])
			{
				case 'a':printf("z"); break;
				case 'b':printf("y"); break;
				case 'c':printf("x"); break;
				case 'd':printf("w"); break;
				case 'e':printf("v"); break;
				case 'f':printf("u"); break;
				case 'g':printf("t"); break;
				case 'h':printf("s"); break;
				case 'i':printf("r"); break;
				case 'j':printf("q"); break;
				case 'k':printf("p"); break;
				case 'l':printf("o"); break;
				case 'm':printf("n"); break;
				case 'n':printf("m"); break;
				case 'o':printf("l"); break;
				case 'p':printf("k"); break;
				case 'q':printf("j"); break;
				case 'r':printf("i"); break;
				case 's':printf("h"); break;
				case 't':printf("g"); break;
				case 'u':printf("f"); break;
				case 'v':printf("d"); break;
				case 'w':printf("d"); break;
				case 'x':printf("c"); break;
				case 'y':printf("b"); break;
				case 'z':printf("a"); break;
				default:printf("%c",qwe[i]);
			}
		}
		else printf("%c",qwe[i]);
	}
	printf("\n");
	
	return  0;
}
