#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    FILE *fp = fopen("Demo.txt", "r");
    if (fp == NULL)
    {
        printf("Error! Could not open Demo.txt\n");
        return 1;
    }

    char ch, word[100];
    int index = 0;

    printf("Reversed words:\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            if (index > 0) {
                word[index] = '\0';
                reverseWord(word, word + strlen(word) - 1);
                printf("%s", word);
                index = 0;
            }
            printf("%c", ch);
        } else {
            word[index++] = ch;
        }
    }

    // Handle last word (if file doesn't end with space)
    if (index > 0) {
        word[index] = '\0';
        reverseWord(word, word + strlen(word) - 1);
        printf("%s", word);
    }

    fclose(fp);
    return 0;
}
