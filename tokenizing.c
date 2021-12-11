/*Student Name: Simon Begashaw
  Student Id  : 125586214
  Email       : sbekele@myseneca.ca
  Course      : CPR101NBB
  Date        : Dec 5, 2021*/

#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h" // Include the header with function prototype and other headers.

void tokenizing()   // Function declaration.
{
    printf("*** Start of Tokenizing Words Demo ***\n"); // Initial welcome print.

    char words[200];    // Declare a string to hold 199 characters plus a null terminator.
    char* word;         // Declare a pointer to a character / string.
    int w_counter;      // Declare an integer to hold the current word count for printing.

    printf("Type a few words separated by space(q - to quit):\n"); // Print user prompt.

    gets(words);    // Get user input of a string.
    word = words;   // Initialize the word pointer to the string.

    while (strcmp(word, "q") != 0)  // Loop until string equals "q" to quit.
    {
        word = strtok(words, " ");  // Get the next word from the initial string tokenizing by space.
        w_counter = 1;  // Set the initial word counter to 1.
        while (word)    // While there is a word (not a null pointer).
        {
            printf("Word #%d is \'%s\'\n", w_counter++, word);  // Print word number and word.
            word = strtok(NULL, " ");   // Tokenize the string to get next word.
        }
        printf("Type a few words separated by space(q - to quit):\n");  // Prompt for input again.

        gets(words);   // Get user input of the next string.
        word = words;  // Crashes without this.  Set word to point back to the beginning of the string.
    }
    printf("*** End of Tokenizing Words Demo ***\n\n"); // Print exit message.
}