#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	int qwe[100003]={0};
	int max=0,idx;
	long long int sum=0;
	
	scanf("%d %d",&n,&k);
	
	for(int i=0;i<n;i++){
		scanf("%d",&idx);
		if(max<idx) max = idx;
		qwe[idx]++;
	}
	
	for(int i=1;i<=max;i++){
		if(qwe[i]>k) sum += i*k;
		else sum += i*qwe[i];
	}
	
	printf("%lld\n",sum);
	
	return 0;
}
