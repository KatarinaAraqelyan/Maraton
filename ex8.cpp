#include <iostream>
#include <string>

void to_upper(std::string word){

for(int i = 0; i < word.size();i++){
      if(int(word[i])>=97 && int(word[i])<=122){
          std::cout<<char(int(word[i])-32);
      }
      else std::cout<<word[i];
  }
}
int main(){
   std::string word = " ";
   std::getline(std::cin, word);
   to_upper(word);
   
   return 0;
}
   

