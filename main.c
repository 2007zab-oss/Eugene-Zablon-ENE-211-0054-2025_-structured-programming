#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int N,marks, category;
  char grade;
  char name[30];
  char regno[20];
  char status[20];
  printf("Enter the number of students you want to record data : \n");
  scanf("%d",&N);
  while (getchar() != '\n');

  for(int i = 0;i < N;i++){
  printf ("enter your name:\n");
  fgets (name,sizeof(name),stdin);
  name[strcspn(name, "\n")] = '\0';

  printf ("enter your registration number:\n");
   scanf ("%19s",regno);

  printf ("enter your marks:\n");
  scanf ("%d",&marks);

  if (marks >= 70)
    category = 1;
  else if (marks >= 60)
    category = 2;
  else if (marks >= 50)
    category = 3;
  else if (marks >= 40)
    category = 4;
    else
    category = 5;

  switch(category){
   case 1 : grade = 'A';
  break;
   case 2 : grade = 'B';
  break;
   case 3 : grade = 'C';
  break;
   case 4 : grade = 'D';
  break;
   case 5 : grade = 'E';
  break;
  default: printf("Invalid input");
  }

  if (marks>40){
    strcpy(status, "Pass");

  }else if(marks>0){
    strcpy(status, "Fail");
  }
  else {
    printf ("\n invalid input");
  }
  printf("\n--------------------------------------------------------------");
  printf("\n               student information                            ");
  printf("\n--------------------------------------------------------------");
  printf("\nRegistration no.:%s",regno);
  printf("\nName:%s",name);
  printf("\nGrade:%c",grade);
  printf("\nStatus:%s",status);
  printf("\n--------------------------------------------------------------\n");
  while (getchar() != '\n');
  }

    return 0;
}

