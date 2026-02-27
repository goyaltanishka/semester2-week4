
/*
Name:Tanishka Goyal
Student ID:201962648
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    char buffer[100]=""; // the buffer is empty initially
    for (int i=1; i<argc ; i++){ // we start with i=1 beacuse argc[0] is the program name 
        strcat(buffer, argv[i]);
        if(i<argc-1) {
            strcat(buffer, "-");
        }
    }
    


    // define appropriate data to hold your answer

    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}