/* 
[main.c] : Fundamentals & Converting
Purpose: Finding Character in String & Converting String to Integers
*/


#include <stdio.h> // Standard Input/Output
#include "converting.h" //Link to file in same directory
#include "converting.c" //Link to file in same directory
#include "fundamentals.h" //Link to file in same directory
#include "fundamentals.c" // Link to file in same directory


int main(void)
{
    //Call fundamentals function to begin demo
    fundamentals();

    //Call string to Int converting function to begin demo
    convertingInt();

    //Call string to double converting function to begin demo
    convertingDouble();

    return 0;
}