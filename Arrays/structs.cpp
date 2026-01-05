#include <iostream>

struct student{

  std::string name;
  double grade;
  bool passed = true;
};

//struct = A structure that groups related variables under one name
//         structs can contain many different data types (string, int, double, bool, etc.)
//         variables in a struct are known as "members"
//         members can be accessed with .  "Class Member Acess Operator"


int main()
{


  student student1;
  student1.name = "Peter";
  student1.grade = 3.2;
  student1.passed;

  student student2;
  student2.name = "Johnny";
  student2.grade = 5.0;
  student2.passed;

  std::cout << student1.name << '\n';
  std::cout << student1.grade << '\n';
  std::cout << student1.passed << '\n';

  std::cout << student2.name << '\n';
  std::cout << student2.grade << '\n';
  std::cout << student2.passed << '\n';

  return 0;
}
