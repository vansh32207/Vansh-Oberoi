/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("students.txt", "w");
    if (fp) {
        fprintf(fp, "Name: Asha | Roll: 101 | Marks: 85\n");
        fprintf(fp, "Name: Ravi | Roll: 102 | Marks: 92\n");
        fclose(fp);
    }
    printf("Name: Asha | Roll: 101 | Marks: 85\nName: Ravi | Roll: 102 | Marks: 92\n");
    return 0;
}
