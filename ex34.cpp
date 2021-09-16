#include<iostream>

struct Student{
  std::string name;
  std::string surname;
  int age;
  int english;
  int math;
  int chemistry;
};

int main(){
  Student st1;
  st1.name = "Stephen";
  st1.surname = "Hawking";
  st1.age = 76;
  st1.english = 20;
  st1.math = 20;
  st1.chemistry = 19;

  std::cout<< st1.name<< std::endl;
  std::cout<< st1.surname<< std::endl;
  std::cout<< st1.age<< std::endl;
  std::cout<< st1.english<< std::endl;
  std::cout<< st1.math<< std::endl;
  std::cout<< st1.chemistry<< std::endl;

   return 0;
}