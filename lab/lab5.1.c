#include <stdio.h>
#include <string.h>
int main() {
    char id[11], s[50], out[50];
    int h, i, j, c = 0, dot;
    double r, total;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", id);
    printf("Input the working hrs: ");
    scanf("%d", &h);
    printf("Salary amount/hr: ");
    scanf("%lf", &r);
    total = h * r;
    sprintf(s, "%.2f", total);
    dot = strlen(s) - 3;
    for (i = strlen(s) - 1, j = sizeof(out) - 1, out[j] = 0; i >= 0; i--) {
        out[--j] = s[i];
        if (i < dot && ++c % 3 == 0 && i > 0) out[--j] = ',';
    }//end for
    printf("Employees ID = %s\nSalary = U$ %s\n", id, out + j);
    return 0;
}//end main
