#include <stdio.h>

#define MAX 50

struct Student {
    int id;
    char name[50];
    int attendance;
};

int main() {
    struct Student students[MAX];
    int n, i, choice;

    printf("===== STUDENT ATTENDANCE SYSTEM =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &students[i].id);
        printf("Student Name: ");
        scanf("%s", students[i].name);
        students[i].attendance = 0;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Mark Attendance\n");
        printf("2. Display Attendance\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- Mark Attendance ---\n");
                for (i = 0; i < n; i++) {
                    int status;
                    printf("%s (ID: %d) - Enter 1 for Present, 0 for Absent: ",
                           students[i].name, students[i].id);
                    scanf("%d", &status);
                    if (status == 1)
                        students[i].attendance++;
                }
                printf("Attendance recorded successfully!\n");
                break;
            case 2:
                printf("\n===== ATTENDANCE RECORD =====\n");
                for (i = 0; i < n; i++)
                    printf("ID: %d | Name: %s | Attendance: %d\n",
                           students[i].id, students[i].name, students[i].attendance);
                break;
            case 3:
                printf("\nThank you for using the system!\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}