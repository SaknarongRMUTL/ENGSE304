#include <stdio.h>
#include <string.h>
int main() {
    char word[100] , Palindrome[100];
    printf("Enter word:\n");
    scanf("%s", word);
    int size = strlen(word);
    for (int i = 0; i < size; i++) {
        Palindrome[i] = word[size - i - 1];
    }//end for
    Palindrome[size] = '\0';
    if (stricmp(word, Palindrome) == 0) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }//end if
    return 0;
}//end main
