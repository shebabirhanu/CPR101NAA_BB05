/* 
[fundamentals.c] : Fundamentals C Functions 
Purpose: Header File for Converting Strings
*/

#include "fundamentals.h" //Header File

void fundamentalsIndexing()      // Function does not return value
{
    printf("*** Start of Indexing Strings Demo ***\n"); // We start the fundemntals demo. 
    char buffer1[80];     // Initialize the array(buffer1) to have a limited size of 80 characters.
    char num_input[10];  // Initialize the array (num_input) to have a limited size of 10 characters.
    int possition;      // Initialize integer for position number.
    while (TRUE) // Initialize conditioned to loop when becomes true.
    {
        printf("Type a string (q - to quit) :\n");
        gets(buffer1); // Scan and read a line of text  and store it in the String variable
        if (strcmp(buffer1, "q") == 0) break;  // Break if 'q' is input
        while (TRUE)   // Initialize conditioned to loop when becomes true.
        {
            printf("Type the character position within the string:\n");
            gets(num_input); //scan and read a line of text fand store it in the String variable 
            possition = atoi(num_input); //convert int to string

            //length of string position exceeds string buffer
            if (possition >= strlen(buffer1)) {
                printf("Wrong position... type again, please\n");
                continue;
            }
            printf("The character found at %d position is \'%c\'\n",
                possition, buffer1[possition]);
            break;

        }
    }
    printf("*** End of Indexing Strings Demo ***\n\n"); // End of the statment
}

// Function does not return value 
void fundamentalsMeasuring(){ 
    //We start Measuring the fundemntals demo.
	printf("*** Start of Measuring Strings Demo ***\n"); 

    // Initialize the array(buffer2) to have a limited size of 80 characters.
	char buffer2[80]; 
	
    //Initialize conditioned to loop when becomes true. 
    while (TRUE) {	
		printf("Type a string (q - to quit) :\n"); 
        
		//Retrieve buffer array from user
        gets(buffer2); 
		
        // Break if 'q' is input
        if (strcmp(buffer2, "q") == 0) break; 
		
        // strlen to calculate the length of a string, Also takes a string as an argument and returns its length.
        printf("The length is %lu\n", strlen(buffer2)); 

	}
	printf("*** End of Measuring Strings Demo ***\n\n"); //End of the statment
}

 // Function does not return value 
void fundamentalsCopying() {
	printf("*** Start of Copying Strings Demo ***\n"); //Start Measuring the fundemntals demo
	char destination[80]; // Initialize the array to have a  size of 80 chars
	char source[80]; // Initialize the array to have a size of 80 characters.
	
    //Initialize condition to loop when true
    while (TRUE) {
        //Store null character in initial position of array 'destination' 
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");
		printf("Type a source string (q - to quiit):\n"); 
        
        //get string and store in array 'source'
        gets(source); 
        
        // Break if 'q' is input
		if (strcmp(source, "q") == 0) break; 

        // Copy one string to another
		strcpy(destination, source); 
		printf("New destination string is \'%s\':\n", destination);
	}    
    // End of the Copying Strings Demo 
	printf("*** End of copying Strings Demo ***\n\n"); //End of the statment
}