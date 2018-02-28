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
		switch(qwe[i])
		{
			case 'a':printf("n"); break;
			case 'b':printf("o"); break;
			case 'c':printf("p"); break;
			case 'd':printf("q"); break;
			case 'e':printf("r"); break;
			case 'f':printf("s"); break;
			case 'g':printf("t"); break;
			case 'h':printf("u"); break;
			case 'i':printf("v"); break;
			case 'j':printf("w"); break;
			case 'k':printf("x"); break;
			case 'l':printf("y"); break;
			case 'm':printf("z"); break;
			case 'n':printf("a"); break;
			case 'o':printf("b"); break;
			case 'p':printf("c"); break;
			case 'q':printf("d"); break;
			case 'r':printf("e"); break;
			case 's':printf("f"); break;
			case 't':printf("g"); break;
			case 'u':printf("h"); break;
			case 'v':printf("i"); break;
			case 'w':printf("j"); break;
			case 'x':printf("k"); break;
			case 'y':printf("l"); break;
			case 'z':printf("m"); break;
			//uppercase
			case 'A':printf("N"); break;
			case 'B':printf("O"); break;
			case 'C':printf("P"); break;
			case 'D':printf("Q"); break;
			case 'E':printf("R"); break;
			case 'F':printf("S"); break;
			case 'G':printf("T"); break;
			case 'H':printf("U"); break;
			case 'I':printf("V"); break;
			case 'J':printf("W"); break;
			case 'K':printf("X"); break;
			case 'L':printf("Y"); break;
			case 'M':printf("Z"); break;
			case 'N':printf("A"); break;
			case 'O':printf("B"); break;
			case 'P':printf("C"); break;
			case 'Q':printf("D"); break;
			case 'R':printf("E"); break;
			case 'S':printf("F"); break;
			case 'T':printf("G"); break;
			case 'U':printf("H"); break;
			case 'V':printf("I"); break;
			case 'W':printf("J"); break;
			case 'X':printf("K"); break;
			case 'Y':printf("L"); break;
			case 'Z':printf("M"); break;
			default:printf("%c",qwe[i]);
		}
	}
	printf("\n");
	
	return  0;
}
