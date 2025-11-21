#include <stdio.h>
#include <stdlib.h>

int main() {
    char *summary;
    int initialSize, newSize;

    printf("Enter initial memory size for summary (in bytes): ");
    scanf("%d", &initialSize);
    getchar();

    summary = (char *)calloc(initialSize, sizeof(char));

    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter initial article summary: ");
    fgets(summary, initialSize, stdin);
    printf("\nInitial Summary: %s\n", summary);
    printf("Enter new memory size to expand summary (in bytes): ");
    scanf("%d", &newSize);
    getchar();
    summary = (char *)realloc(summary, newSize);

    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter updated (longer) summary: ");
    fgets(summary, newSize, stdin);

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);

    return 0;
}

