#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
  char name[50];
  int age;
  float gpa;
  bool isFullTime;

};

void printStudent(struct Student student);


int main() {

  struct Student student1 = {"Spongebob", 30, 2.5, true};
  struct Student student2 = {0};

  strcpy(student2.name, "Patrick");
  student2.age = 40;
  student2.gpa = 0.4;
  student2.isFullTime = false;

  printStudent(student1);
  printStudent(student2);

  return 0;
}
void printStudent(struct Student student) {

  printf("%s\n", student.name);
  printf("%d\n", student.age);
  printf("%.2f\n", student.gpa);
  printf("%s", student.isFullTime ? "yes\n" : "no\n");

}
