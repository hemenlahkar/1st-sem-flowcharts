#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[20];
    int roll_no;
    int marks[3];
} Student;

int main()
{
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    Student *s = (Student *)malloc(N * sizeof(Student));

    for (size_t i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("Enter details of the student no. %zu::\n", i + 1);
        printf("Name: ");
        fgets(s[i].name, 20, stdin);
        printf("Roll no.: ");
        scanf("%d", &(s[i].roll_no));
        printf("Marks of the three subjects: ");
        scanf("%d%d%d", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
    }

    for (size_t i = 0; i < N; i++)
    {
        printf("===== Details of Student %zu =====\n", i + 1);
        printf("Name: %s\nRoll No.: %d\nMarks:\n", s[i].name, s[i].roll_no);
        for(size_t j = 0; j < 3; j++)
            printf("\tSubject %zu: %d\n", j + 1, s[i].marks[j]);
        putchar('\n');
    }
    
    
    return 0;
}