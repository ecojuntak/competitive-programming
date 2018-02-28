#include<stdio.h>
#include<string.h>

void swap(char *a,char *b){
	char temp = *a;
	*a=*b;
	*b=temp;
}


int main(){
	char *p,a[1000],b[1000];
	int i;
	int c,d,j,k,l;
	
	scanf("%d %d",&c,&d);
	
	for(i=0;i<c;i++){
		scanf("%s",&a);
		
		for(j=0;j<d;j++){
			for(k=0;k<strlen(a)-1;k++){
				swap(&a[k],&a[k+1]);
			}
			printf("%s",a);
		}
	}

	
	return 0;
}
