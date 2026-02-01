#include <stdio.h>
int main() {
    int position, years, projects;
    double base, bonus = 0, special = 0, net;
    printf("Position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);
    printf("Years of Experience: ");
    scanf("%d", &years);
    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);
    if (position == 1) 
    {
        base = 20000;
    }//end if
    else if (position == 2)
    {
     base = 35000;
    }//end if
    else if (position == 3) 
    {
        base = 50000;
    }//end if
    else {
        printf("Invalid position!\n");
        return 0;
    }//end if
    if (years >= 1 && years <= 3)
    {
        bonus = base * 0.10;
    }//end if
    else if (years >= 4 && years <= 5)
    {
        bonus = base * 0.15;
    }//end if
    else if (years > 5)
    {
        bonus = base * 0.20;
    }//end if
    if (projects > 5)
    {
        special = base * 0.05;
    }//end if
    net = base + bonus + special;
    printf("Base Salary: %.0f THB\n", base);
    printf("Experience Bonus: %.0f THB\n", bonus);
    printf("Special Bonus: %.0f THB\n", special);
    printf("Net Salary: %.0f THB\n", net);
    return 0;
}//end main
