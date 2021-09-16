#include <iostream>
#include<string>

void foo(std::string str){
int count{};
int cur_count{};
char ch = ' ';
  for(int i = 0; i < str.length(); i++){
     
     if(str[i] == str[i+1]){
       cur_count++;
     }else{
       if(cur_count > count){
         count = cur_count;
         ch = str[i];
         cur_count = 0;
       }
   }
}
  for(int i = 0; i < count+1; i++){
     std::cout<<ch;
  }
}

int main(){
std::string str;
std::getline(std::cin,str);
foo(str);

return 0;

}    