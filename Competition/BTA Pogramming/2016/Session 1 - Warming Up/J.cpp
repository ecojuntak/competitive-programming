#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int n,A=0,B=0,C=0,D=0,bil;
	
	scanf("%llu",&n);
	
	while(n--){
		scanf("%llu",&bil);	
		if(bil%2==0){
			A += bil;
			D++;
		}
		else{
			B += bil;
			C++;
		}
	}
	
	printf("%llu %llu %llu %llu\n",B,A,D,C);
	
	return 0;
}
