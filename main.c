#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char word[30];

    // Keep collecting words until user enters 0
    while (1)
    {
        printf("Enter a word (0 to exit):\n");
        gets(word);

        // Exit if user enters 0
        if (word[0] == '0')
        {
            exit(1);
        }
        else
        {
            // Append word to file
            file = fopen("words.txt", "a");

            if (file == NULL)
            {
                printf("File could not be opened.\n");
            }
            else
            {
                fprintf(file, "%s\n", word);
                fclose(file);
            }
        }
    }

    return 0;
}
