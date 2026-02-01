#include <stdio.h>
#include <string.h>
// โครงสร้างข้อมูลนักเรียน
struct Student {
    char Name[30];
    char ID[10];
    float Score[5];
} typedef S;
// ฟังก์ชันหาคะแนนเกรด
const char* grade(float s) {
    if (s >= 80) return "A";
    else if (s >= 75) return "B+";
    else if (s >= 70) return "B";
    else if (s >= 65) return "C+";
    else if (s >= 60) return "C";
    else if (s >= 55) return "D+";
    else if (s >= 50) return "D";
    else return "F";
}
int main() {
    S st[3];
    int i, j;
    float sum, avg;
    printf("Enter the details of 3 students :\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        fgets(st[i].Name, sizeof(st[i].Name), stdin);
        st[i].Name[strcspn(st[i].Name, "\n")] = '\0';
        printf("ID: ");
        scanf("%s", st[i].ID);
        for (j = 0; j < 5; j++) {
            printf("Scores in Subject %d: ", j + 1);
            scanf("%f", &st[i].Score[j]);
        }//end for j
        getchar();
    }//end for i
    for (i = 0; i < 3; i++) {
        sum = 0;
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", st[i].Name);
        printf("ID: %s\n", st[i].ID);
        printf("Scores: ");
        for (j = 0; j < 5; j++) {
            printf("%.0f ", st[i].Score[j]);
            sum += st[i].Score[j];
        }//end for j
        printf("\nGrades: ");
        for (j = 0; j < 5; j++) {
            printf("%s ", grade(st[i].Score[j]));
        }//end for j
        avg = sum / 5.0;
        printf("\nAverage Scores: %.1f\n", avg);
    }//end for i
    return 0;
}//end main
