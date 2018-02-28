#include <bits/stdc++.h>

using namespace std;

inline string IntToString(int a){
    char x[100];
    sprintf(x,"%d",a); string s = x;
    return s;
}


int main()
{
	int t,a,b;
	string s;
	scanf("%d",&t);
	
	while(t--)
	{
		int result = 0;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++)
		{
			s = IntToString(i);
			int count = 0;
			for(int j=0;j<s.size();j++)
			{
				if(s[j]!='8' && s[j]!='7') count++;
			}
			if(count<=1) result++;
		}
		printf("%d\n",result);
	}
	return 0;
}
