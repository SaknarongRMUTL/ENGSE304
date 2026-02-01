#include <stdio.h>
int main() {
    int N;
    printf( " Enter value: " );
    if(scanf( "%d" , &N ) != 1) {
        printf("ให้กรอกตัวเลข\n");
        return 1;
    }
    printf("Series: ");
    if(N%2 == 0) {
        int i = N;
        for ( i = N; i >= 0; i--) {
            if(i % 2 == 0) {
                printf("%d ", i);
            }
        } 
    }
    else {
        int i = 1;
        for ( i = 1; i <= N; i++) {
            if(i % 2 == 1) {
                printf("%d ", i);
            }
        } 
    }
}