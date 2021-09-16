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
 
 if(st1.age > st2.age){
   std::cout<<st1.name;
 }else std::cout<<st2.name;

 return 0;
}