#include <stdio.h>
  
   int main(){
  
           printf("Programm Kopieren eines Arrays");
           float quelle[10] = {3.2, 2.4, 4.6, 7.3, 3.3, 4.2, 7.8, 2.3, 5.9, 12.3};
           float ziel[10];
           int i=0;
  
           printf("\nDie Array Elemente von quelle heissen: ");
 
          for(i=0; i<10; i++){
                  if(i!=0)printf(",");
                  printf(" %.2f", quelle[i]);
          }
 
          int invertIndex;
          for(i=0; i<10; i++){
                  invertIndex = 9 - i;
                  ziel[invertIndex] = quelle[i];
          }
 
          printf("\nDie Array Elemente von ziel heissen: ");
          for(i=0; i<10; i++){
                  if(i!=0)printf(",");
                  printf(" %.2f", ziel[i]);
          }
 
          printf("\n");
 
          return 0;
  }
