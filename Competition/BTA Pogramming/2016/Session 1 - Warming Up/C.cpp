#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b;
	int x=0,y=0,z=0;
	
	scanf("%d %d %d",&n,&a,&b);
	
	for(int i=1;i<=n;i++){
		if(i%a==0 && i%b!=0) x++;
		if(i%b==0 && i%a!=0) y++;
		if(i%b==0 && i%a==0) z++;
	}
	
	printf("%d %d %d\n",x,y,z);
	
	return 0;
}
