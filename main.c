#include <stdio.h>

struct Student
{
    char Name[50];
    char Address[100];
    unsigned int Student_ID;
};

int main()
{
    struct Student students[20];
    int i;

    for(i=0;i<20;i++)
    {
        printf("Enter student details %d\n",i+1);

        printf("Name: ");
        scanf("%s",&students[i].Name);

        printf("Address: ");
        scanf("%s",&students[i].Address);

        printf("Student ID: ");
        scanf("%d",&students[i].Student_ID);

        printf("\n");
    }

    printf("Student Details\n");
    for(i = 0; i < 20; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("Address: %s\n", students[i].Address);
        printf("Student ID: %d\n", students[i].Student_ID);
        printf("\n");
    }

    free(students);

    return 0;
}
