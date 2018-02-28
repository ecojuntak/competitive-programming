#include <stdio.h>

int main(){
	float N;
	
	scanf("%f", &N);
	printf("NOTAS:");
	printf("%d\n", N);
	printf("%d nota(s) de R$ 100,00\n", N/100);
	printf("%d nota(s) de R$ 50,00\n", (N/100)/50);
	printf("%d nota(s) de R$ 20,00\n", ((N%100)%50)/20);
	printf("%d nota(s) de R$ 10,00\n", (((N%100)%50)%20)/10);
	printf("%d nota(s) de R$ 5,00\n",  ((((N%100)%50)%20)%10)/5);
	printf("%d nota(s) de R$ 2,00\n",  (((((N%100)%50)%20)%10)%5)/2);
	
	printf("MOEDAS:");
	printf("%d moeda(s) de R$ 1,00\n",  ((((((N%100)%50)%20)%10)%5)%2)/1);
	printf("%d moeda(s) de R$ 0.50\n",  (((((((N%100)%50)%20)%10)%5)%2)/1)/0.5);
	printf("%d moeda(s) de R$ 0.25\n",  ((((((((N%100)%50)%20)%10)%5)%2)/1)/0.5)/0.25);
	printf("%d moeda(s) de R$ 0.10\n",  (((((((((N%100)%50)%20)%10)%5)%2)/1)/0.5)/0.25)/0.10);
	printf("%d moeda(s) de R$ 0.05\n",  ((((((((((N%100)%50)%20)%10)%5)%2)/1)/0.5)/0.25)/0.10)/0.05);
	printf("%d moeda(s) de R$ 0.01\n",  (((((((((((N%100)%50)%20)%10)%5)%2)/1)/0.5)/0.25)/0.10)/0.05)/0.01);	
	return 0;
}

