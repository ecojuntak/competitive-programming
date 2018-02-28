#include <bits/stdc++.h>

using namespace std;

bool isPal(string sub)
{
//	cout<<sub<<endl;
	int j = sub.size()-1;
	for(int i=0;i<sub.size();i++)
	{
		if(sub[i]!=sub[j]) return false;
		j--;
	}
	return true;
}

int main()
{
	string s;
	int a;
	
	scanf("%d",&a);
	
	while(a--)
	{
		cin>>s;
		int size = s.size();
		s[s.size()]='.';
		int count = 0;
		int x=0;
		for(int i=0;i<size;i++)
		{
			for(int j=1;j<=size-x;j++)
			{
//				printf("pos %d len %d  ",i,j);
				if(isPal(s.substr(i,j))) count++;
			}
			x++;
		}
		
        printf("%d\n",count);
	}
	
	return 0;
}


