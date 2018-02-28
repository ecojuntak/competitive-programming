#include <bits/stdc++.h>

using namespace std;

int main()
{
	int qwe[1009];
	int a,x=0;
	bool bad = false;

	scanf("%d",&a);
	for(int i=0;i<a;i++)
		scanf("%d",&qwe[i]);

	for(int i=1;i<a;i++)
	{
		if(qwe[i]%2==0 && qwe[i-1]%2==0){
            bad = true;
            break;
        }

		if(qwe[i]%2==1 && qwe[i-1]%2==1){
            bad = true;
            break;
        }

	}

	if(!bad) printf("1\n");
	else printf("0\n");

	return 0;
}
