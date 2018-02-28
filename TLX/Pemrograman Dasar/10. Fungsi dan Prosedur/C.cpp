#include <bits/stdc++.h>

using namespace std;

inline string IntToString(int a)
{
    char x[100];
    sprintf(x,"%d",a);
    string s = x;
    return s;
}

inline int StringToInt(string a)
{
    char x[100];
    int res;
    strcpy(x,a.c_str());
    sscanf(x,"%d",&res);
    return res;
}

string reverse(string a)
{
	char x[100];
	string s;
	int j=0;
	for(int i=a.size()-1;i>=0;i--)
	{
		x[j] = a[i];
		j++;
	}
	
	s = x;
	
	return s;
}

int main()
{
	string a,b,c;
	int aa,bb,cc;
	
	cin>>a>>b;
	
	a = reverse(a);
	b = reverse(b);
	
	aa = StringToInt(a);
	bb = StringToInt(b);
	
	c = IntToString(aa+bb);
	
	c = reverse(c);
	
	cc = StringToInt(c);
	
	printf("%d\n",cc);
	
	return 0;
}
