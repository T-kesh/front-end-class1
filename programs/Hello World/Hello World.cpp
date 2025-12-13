#include <stdio.h>
#include <ctype.h>

int main() {
    char text[500];
    int x, words = 0, chars = 0;

    printf("\nSTRING OPERATIONS\n");
    printf("Enter a paragraph: ");
    
    fgets(text, sizeof(text), stdin);

    for (x = 0; text[x] != '\0'; x++) {
        if (!isspace(text[x]))
            chars++;  
         

        if ((x == 0 && !isspace(text[x])) || (isspace(text[x]) && text[x + 1] != '\0' && !isspace(text[x + 1])))
            words++;
    }

    printf("Total characters (excluding spaces): %d\n", chars);
    printf("Total words: %d\n", words);

    return 0;
}
