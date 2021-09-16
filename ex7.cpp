#include <iostream>
#include <string>
void string_without_Vowel(std::string name){
  for(int i = 0; i < name.size();i++){
    if(name[i] == 'a' || name[i] == 'e'|| name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
      continue;
    }
     else std::cout<<name[i];
  }
}
int main(){
   std::string name = " ";
   std::cout<<"Enter your name!"<<std::endl;
   std::getline(std::cin,name);
   string_without_Vowel(name);

   return 0;
} 