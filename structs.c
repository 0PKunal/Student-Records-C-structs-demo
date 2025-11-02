#include <stdio.h>

#define MAX_STUDENTS 10
#define NAME_LEN 50
#define GRADE_LEN 30

typedef struct 
{
  char name[NAME_LEN];
  int number;
  char grade[GRADE_LEN];
} Student;

int main(void) 
{
  Student students[MAX_STUDENTS] = {0};

  for (int i = 0; i < MAX_STUDENTS; i++) 
  {
    printf("\nEnter details for student no %d:\n", i + 1);

    printf("Name: ");
    if (scanf(" %49[^\n]", students[i].name) != 1) 
    {
      fprintf(stderr, "Input error for name.\n");
      return 1;
    }

    printf("Number: ");
    if (scanf("%d", &students[i].number) != 1) 
    {
      fprintf(stderr, "Input error for number.\n");
      return 1;
    }

    printf("Grade: ");
    if (scanf(" %29[^\n]", students[i].grade) != 1) 
    {
      fprintf(stderr, "Input error for grade.\n");
      return 1;
    }
  }

  printf("\nStudent Exam Reprot:\n");
  for (int i = 0; i < MAX_STUDENTS; i++) 
  {
    printf("\nName: %s\nNumber: %d\nGrade: %s\n",
           students[i].name, students[i].number, students[i].grade);
  }

  return 0;
}