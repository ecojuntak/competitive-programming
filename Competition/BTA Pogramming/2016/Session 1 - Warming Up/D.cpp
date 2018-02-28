#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	unsigned long long int sum=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		sum += (pow(2,i)+i-1);
	}
	
	printf("%llu\n",sum);
	
	return 0;
}
