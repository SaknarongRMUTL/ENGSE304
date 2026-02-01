#include <stdio.h>
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }//end for
    return min;
}//
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }//end for
    return max;
}
int main() {
    int arr[100], n = 0;
    printf("Enter value:\n");
    while (scanf("%d", &arr[n]) == 1) {
        n++;
        if (getchar() == '\n') break;
    }//end while
    printf("\nIndex: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i);
    }//end for
    printf("\nArray: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }//end for
    printf("\n\nMin : %d\n", findMin(arr, n));
    printf("Max : %d\n", findMax(arr, n));
    return 0;
}//end main