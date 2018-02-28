#include <bits/stdc++.h>

using namespace std;

unsigned long long int fac(unsigned long long int n)
{
	unsigned long long int x=n;
	
	for(int i=n-1;i>=1;i--)
		x = x*i;
		
	return x;
}

inline string IntToString(int a){
    char x[100];
    sprintf(x,"%d",a); string s = x;
    return s;
}


int main()
{
	unsigned long long int n;
	char qwe[1000];
	scanf("%d",&n);
	
	n = fac(n);
	
	qwe = 
	
	return 0;
}
