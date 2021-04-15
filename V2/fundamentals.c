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
        
		gets(buffer2); //Retrieve buffer array from user
		
        if (strcmp(buffer2, "q") == 0) break; // Break if 'q' is input
		
        // strlen to calculate the length of a string, Also takes a string as an argument and returns its length.
        printf("The length is %lu\n", strlen(buffer2)); 

	}
	printf("*** End of Measuring Strings Demo ***\n\n"); //End of the statment
}
