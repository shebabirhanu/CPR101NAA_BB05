/* 
[converting.c] : Functions
Purpose: Function for Converting Strings to Double
*/

#include "converting.h" //Link to header File

void converting(){
    printf("*** Start of Converting Strings to double Demo ***\n");
    char double_string[80];
    double double_number;

    while(TRUE){
        printf("Type the double numeric string (q - to quit):\n");
        gets(double_string);
        if (strcmp(double_string, "q") ==0) break;
        double_number = atof(double_string);
        printf("Converted number is %f\n", double_number);
    }
    printf("*** End of Converting Strings to double Demo ***\n\n");
}