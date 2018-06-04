#include <stdio.h>

struct Student {
	char firstname[30];
	char lastname[30];
	int  age;
	int  studentID;
};

void printStudent(struct Student* student)
{
  printf("This student is -\n");
  printf("	First Name:%s\n", student->firstname);
  printf("      Last Name:%s\n", student->lastname);
  printf("      Age Name:%d\n", student->age);
  printf("      Student ID Name:%d\n", student->studentID);
}

int main()
{
  struct Student studentArr[5];
  char input[256];
  char confirm;
  char yes = yes;
  for(int i = 0; i < 5; i++)
  {
    printf("Enter First name\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", studentArr[i].firstname);

    printf("Enter Last name\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", studentArr[i].lastname);

    printf("Enter Age\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &studentArr[i].age);

    printf("Enter Student ID\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &studentArr[i].studentID);

    printStudent(&studentArr[i]);
  }
 printStudent(&studentArr[1]);
 printStudent(&studentArr[2]);
 printStudent(&studentArr[3]);
 printStudent(&studentArr[4]);

}
