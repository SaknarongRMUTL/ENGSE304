#include <stdio.h>
int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp, pos32;
    printf("Old Series : ");
    for(i=0; i<n; i++) {
        printf("%d", arr[i]);
        if(i<n-1) {
            printf(", ");
        }//end if
    }//end for
    printf("\n");
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }//end if
        }//end for
    }//end for
    printf("New Series : ");
    for(i=0; i<n; i++) {
        printf("%d", arr[i]);
        if(i<n-1) {
            printf(", ");
        }//end if
    }//end for
    printf("\n");
    for(i=0; i<n; i++) {
        if(arr[i] == 32) {
            pos32 = i;
            break;
        }//end if
    }//end for
    printf("Pos of 32 : %d\n", pos32);
    return 0;
}//end main