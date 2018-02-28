#include<stdio.h>
#include<math.h>

int kpk(int a,int b){
	return a*b/gcd(a,b);
}

int gcd(int a,int b){
	if(b==0)return a;
	else{
		return gcd(b,a%b);
	}
}

int main(){
	
	int n;
	
	scanf("%d",&n);
	int i,a;
	double b;
	for(i=0;i<n;i++){
		scanf("%d",&a);
		
		b=(double)kpk(a,50);
		b=b/2;
		b=sqrt(b);
		if(b>=3.5){
			b=floor(b);
		}
		else{
			b=ceil(b);
		}
		
		printf("%lf",b);
		
	}
	
	
	
	return 0;
}
