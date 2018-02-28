#include <stdio.h>
  
int main() {
	
	char Y [9];
    double A,B,TOTAL;
    
    scanf("%s", &Y);
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    TOTAL = 15/100.0 * B + A ;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
     
  
    return 0;
}

