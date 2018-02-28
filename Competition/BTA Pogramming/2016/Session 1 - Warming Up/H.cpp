#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,mid;
	
	scanf("%d",&a);
	mid = (int)(a/2);
//	printf("mid  %d\n",mid);
	for(int i=0;i<a;i++){
		//I
		for(int j=0;j<1;j++){
			printf("#");
		}
		printf(" ");
		
		//T
		for(int j=0;j<a;j++){
			if(i==0 || j==mid) printf("#");
			else printf(" ");
		}
		printf(" ");
		
		//D
		for(int j=0;j<a;j++){
			if(j==0 || (j<=mid && i==0) || (j<=mid && i==a-1) || ((i!=a-1 && j==mid+1) && (i!=0 && j==mid+1) )) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	
	
	return 0;
}
