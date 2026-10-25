/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
};

int main(void) {
    struct Employee e = {"Raj", 11};
    FILE *fp = fopen("emp.bin", "wb");
    if (fp) {
        fwrite(&e, sizeof(struct Employee), 1, fp);
        fclose(fp);
    }
    struct Employee read_e;
    fp = fopen("emp.bin", "rb");
    if (fp) {
        fread(&read_e, sizeof(struct Employee), 1, fp);
        fclose(fp);
        printf("Displays employee data read from file.\n");
        printf("Name: %s | ID: %d\n", read_e.name, read_e.id);
    }
    return 0;
}
