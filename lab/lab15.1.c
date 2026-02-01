#include <stdio.h>
#include <string.h>
int main() {
    char filename[100];
    char word[100];
    int count = 0;
    FILE *file;
    printf("Enter file name:\n");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Error reading filename.\n");
        return 1;
    }//end of if
    filename[strcspn(filename, "\n")] = '\0';
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Cannot open file %s\n", filename);
        return 1;  
    }//end of if
    while (fscanf(file, "%99s", word) == 1) { 
        count++;
    }//end of while
    printf("Total number of words in '%s' : %d words\n", filename, count);
    fclose(file);
    return 0;
}//end of main