
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int vec[20];
    int k;
    for(int k=1; k<20; ++k) {
      vec[k]= k*vec[k-1] ;
    printf("Factorial=%d\n",vec[k]);

    }



    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    
    return 0;
   }
 
