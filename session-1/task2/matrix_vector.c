
/*
 * Matrix-vector product
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4];
    float c[4];

    int i,j ;

    for (i=0;i<4; ++i) {
      for (j=0;j<4; ++j){
         a[i][j] = 1.0;
         b[j] = 1.0;
         c[i] = 0.0;
      }
    }

    for (i=0;i<4; ++i) {
      for (j=0;j<4; ++j){
         c[i] += a[i][j] * b[j] ;
      }
         printf("answer=%f\n", c[i]);
      
    }


    /*
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    */
    return 0;
 }
