#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp;
    char line[10000];
    int lines = 0, words = 0, chars = 0;
    int c;

    printf("Enter the file name: ");
    scanf("%s", fp);  // Read file name without spaces

    fp = fopen(fp, "r");
    if (fp == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        lines++;  // Count each line
        for (c = 0; line[c] != '\0'; c++) {
            if (line[c] == '\n') {
                // End of line reached
                break;
            }
            if (!isspace(line[c])) {
                chars++;  // Count non-space characters
            }
        }
        // Count words in this line
        int word_count = 0;
        int in_word = 0;
        for (c = 0; line[c] != '\0'; c++) {
            if (isspace(line[c])) {
                if (in_word) {
                    word_count++;
                    in_word = 0;
                }
            } else {
                in_word = 1;
            }
        }
        if (in_word) {
            word_count++;
        }
        words += word_count;
    }

    fclose(fp);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);

    return 0;
}
