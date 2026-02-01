#include <stdio.h>
int Nub(int n) {
    int digits = 0;
    for (int number = n; number > 0; number /= 10) {
        digits++;
    }//end for
    return digits;
}//end Nub
int Armstrong(int n) {
    int nubnumber = Nub(n);
    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < nubnumber; i++) {
            power *= digit;
        }//end for
        sum += power;
    }//end for
    return (sum == n);
}//end Armstrong
int main() {
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    if (Armstrong(n) == 1){
        printf("Pass.\n");
    }
    else{
        printf("Not Pass.\n");
    }//end if
    return 0;
}//end main