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

  Student st2;
  st2.name = "Elon";
  st2.surname = "Musk";
  st2.age = 50;
 
  Student st3;
  st3.name = st1.name;
  st3.surname = st2.surname;
  st3.age = (st1.age + st2.age)/2;

  std::cout<<st3.name<<std::endl;
  std::cout<<st3.surname<<std::endl;
  std::cout<<st3.age<<std::endl;


 return 0;
}