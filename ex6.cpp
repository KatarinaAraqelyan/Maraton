#include <iostream>
#include <string>
void revers(std::string name){
  for(int i = name.size()-1; i >= 0;i--){
     std::cout<<name[i];
  }
}
int main(){
   std::string name = " ";
   std::cout<<"Enter your name!"<<std::endl;
   std::getline(std::cin,name);
   revers(name);

   return 0;
}