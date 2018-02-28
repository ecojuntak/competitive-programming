#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
	return a > b;
}

int main(){
	int n,qwe[105],asd[105];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++) scanf("%d",&qwe[i]);
	for(int i=0;i<n;i++) scanf("%d",&asd[i]);
	
	sort(qwe,qwe+n);
	sort(asd,asd+n,comp);
	
	for(int i=0;i<n;i++){
		printf("%d",qwe[i]);
		if(i!=n-1) printf(" ");
	}
	printf("\n");
	
	for(int i=0;i<n;i++){
		printf("%d",asd[i]);
		if(i!=n-1) printf(" ");
	}
	printf("\n");
	return 0;
}
