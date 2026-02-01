#include <stdio.h>
int main() {
    int num;
    printf("User Input : ");
    scanf("%d", &num);
    char *ones[] = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };//end ones
    char *tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };//end tens
    printf("Result : ");
    if (num < 20) {
        printf("%s", ones[num]);
    } else if (num < 100) {
        printf("%s", tens[num / 10]);
        if (num % 10 != 0)
            printf(" %s", ones[num % 10]);
    } else {
        printf("Out of range (0–99)");
    }//end if
    return 0;
}//end main
