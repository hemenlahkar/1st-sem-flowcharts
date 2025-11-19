#include<stdio.h>

typedef struct {
    char name[20];
    int roll_no;
    int marks[3];
} Student;

void inputData(Student *s)
{
    printf("\nEnter the name of the student: ");
    scanf("%[^\n]", s->name);
    printf("Enter the roll no.: ");
    scanf("%d", &(s->roll_no));
    printf("Enter the marks of the three subjects: ");
    for(int i = 0; i < 3; i++)
        scanf("%d", &(s->marks[i]));
    fflush(stdin);
}

float percentage(Student s)
{
    int i = 0, sum = 0;
    while(i < 3) sum += s.marks[i++];
    return sum / 3;
}

void displayData(Student s)
{
    printf("\n====Details of the student====");
    printf("\nName: %s\n", s.name);
    printf("Roll no.: %d\n", s.roll_no);
    printf("Marksheet::\n");
    for(int i = 0; i < 3; i++)
        printf("\tSubject %d: %d\n", i+1, s.marks[i]);
    printf("\tOverall Percentage: %.2f\n", percentage(s));
}

int main()
{
    Student s;
    inputData(&s);
    displayData(s);
    return 0;
}