
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
   float a[4][4];
   float b[4][4];
   float c[4][4];
   int i,j ;

   for(i=0; i<4; ++i) {
      for(j=0; j<4; ++j) {
         a[i][j] = 1.0;   // rows
         b[i][j]= 1.0 ;   // columns

      }
   }

   for(i=0; i<4; ++i) {
      for(j=0; j<4; ++j) {
         c[i][j] = a[i][j] + b[i][j];

         printf("sum=%f\n", c[i][j]);

      }
   }



    



    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    return 0;
 }
