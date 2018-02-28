#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	unsigned long long int a,b;
	
	cin>>a;
	cin>>b;
	
	if(a==b) printf("=\n");
	else if (a<b) printf("<\n");
	else if (a>b) printf(">\n");
	
	return 0;
}
