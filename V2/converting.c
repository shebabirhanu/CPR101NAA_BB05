/* 
[converting.c] : Functions
Purpose: Function for Converting Strings to Double
*/

#include "converting.h" //Link to header File

void convertingInt() {
     //Begin Converting demo
    printf("*** Start of Converting Strings Demo ***\n");

    //Initialize 80-element array
    char int_string[80];

    //Initialize integer
    int int_number;

    //Initialize conditional to loop when true
    while (TRUE) {
        //Ask user to input  array and store as int_string 
        printf("Type the int numeric string (q - to quit):\n");
        gets(int_string);

        //If user types 'q', quit
        if (strcmp(int_string, "q") == 0) break;

        //Convert string to integer
        int_number = atoi(int_string);

        //Return converted number to user
        printf("Converted number is %d\n", int_number);
    }
    //End of Converting demo
    printf("*** End of Converting Strings Demo ***\n\n");
}

void convertingDouble() {
    //Begin Converting demo
    printf("*** Start of Converting Strings to double Demo ***\n");
    
    //Initialize 80-element array
    char double_string[80];

    //Initialize double 
    double double_number;

    while(TRUE){
        //Ask user to input double num string and store user input as double_string
        printf("Type the double numeric string (q - to quit):\n");
        gets(double_string);
       
        //If user types 'q', quit
        if (strcmp(double_string, "q") ==0) break;
        
        ////Convert string to double
        double_number = atof(double_string);

        //Return converted number to user
        printf("Converted number is %f\n", double_number);
    }
    //End of Converting demo
    printf("*** End of Converting Strings to double Demo ***\n\n");
}