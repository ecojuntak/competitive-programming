#include <stdio.h>

int main(){
	float a,b,c,d,e;
	float x,y;
	
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	
	x= ( (a*2)+(b*3)+(c*4)+(d*1) )/10;
	
	y= (( ( (a*2)+(b*3)+(c*4)+(d*1))/10)+e)/2;
	
	printf("Media: %.1f\n", x);
	
	if(x>=7.0){
		printf("Aluno aprovado.\n");
	}
	else if(x<5.0){
		printf("Aluno reprovado.\n");
	}
	else if(x>=5.0 && x<7.0){
		printf("Aluno em exame.\n");
	}
	
	
	printf("Nota do exame: %.1f\n", e);
	
	
	if(y>=5.0){
		printf("Aluno aprovado.\n");
	}
	else if(y<=4.9){
		printf("Aluno reprovado.\n");
	}
	
	printf("Media final: %.1f\n", y);
	
	
	
	return 0;
}
