#include <stdio.h>
int main() {
    int N;
    printf("Enter N :\n");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }//end for
    printf("Index:");
    for (int i = 0; i < N; i++) {
        printf(" %d", i);
    }//end for
    printf("\n");
    printf("Array:");
    for (int i = 0; i < N; i++) {
        int num = arr[i];
        int isPrime = 1;
        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j <= num / 2; j++) { 
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }//end if
            }//end for
        }//end else
        if (isPrime) {
            printf(" %d", num);
        } else {
            printf("  #");
        }//end if
    }//end for
    printf("\n");
    return 0;
}//end main
