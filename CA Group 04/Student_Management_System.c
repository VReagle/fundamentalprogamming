#include <stdio.h>

int main()
{
    int n, i;
    char name[20][50];
    int attendance[20];
    int sum_present = 0;
    int sum_absent = 0;

    printf("===== Student Attendance System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student names
    for(i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name[i]);
    }

    // Mark attendance
    printf("\nMark Attendance\n");
    printf("1 = Present, 0 = Absent\n");

    for(i = 0; i < n; i++)
    {
        printf("%s: ", name[i]);
        scanf("%d", &attendance[i]);
    }

    // Display attendance report
    printf("\n===== Attendance Report =====\n");

    for(i = 0; i < n; i++)
    {
        printf("%s - ", name[i]);

        if(attendance[i] == 1)
            printf("Present\n");
        else
            printf("Absent\n");

        if(attendance[i] == 1)
        {
            sum_present = sum_present + attendance[i];
        }
        else
        {
            sum_absent = sum_absent + 1;
        }
    }

    //Attendence display

    printf("\n===== Attendance Total =====\n");


    printf("Total Present : %d \n", sum_present);
    printf("Total Absent : %d \n", sum_absent);


    return 0;
}