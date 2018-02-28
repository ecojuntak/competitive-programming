#include<stdio.h>
int main()
{
 int A,B,C;
 scanf("%d %d %d",&A,&B,&C);
 
 int matriks1[A][B];            // Bagian Matriks 1
 int w,x;
 for(w=0; w<A; w++)
    {
    for(x=0; x<B; x++)
      {
       scanf("%d",&matriks1[w][x]);      
      }      
    }
 

 int matriks2[B][C];           // Bagian Matriks 2
 for(w=0; w<B; w++)
    {
    for(x=0; x<C; x++)
      {
       scanf("%d",&matriks2[w][x]);      
      }      
    }

 
  int y;
  int hasil[A][C];  
  int total=0;
  int counter=0;
   for(w=0; w<A; w++)
      {
       for(x=0; x<C; x++)
          {
           for(y=0; y<B; y++)
              {
               counter++;     
               total = total + (matriks1[w][y] * matriks2[y][x]);                     
              }
            hasil[w][x]= total;
           
           if(x!= C-1)
              {
               printf("%d ",hasil[w][x]);
              }
           else
              {
               printf("%d",hasil[w][x]);           
              }   
            total=0;
            counter=0;  
          }
        printf("\n");       
      }   
 return 0;   
}
