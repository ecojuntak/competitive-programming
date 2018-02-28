#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[100009];
	char asd[100][10009];
	int x=0;
	gets(qwe);
	
	for(int i=0;i<strlen(qwe);i++)
	{
		int y=0;
		while(qwe[i]!=' ')
		{
			asd[x][y]=qwe[i];
			y++;
		}
		x++;
	}
	
	printf("%s",asd[x]);
	
	return 0;
}
