
#include <stdio.h>

int main( void ) {
    int argument1;
    int argument2;
    int sum;

    printf("Enter the first argument: ");
    scanf(" %d\n",&argument1);
    
    printf("Enter the second argument:");
    scanf(" %d\n",&argument2);

    sum = argument1 + argument2 ;
    printf("sum= %d\n",sum);
    // define suitable data

    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    return 0;
}