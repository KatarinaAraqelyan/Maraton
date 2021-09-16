#include <iostream>
#include<string>

char dublicate_letter(std::string str){
char m_dub = ' ';
int cur_count{};
int count{};
  for(int i = 0; i < str.length(); i++){
         for(int j = i + 1; j < str.length(); j++){
            if(str[i] == str[j]){
             cur_count++;
            }
         }
         if(cur_count > count){
           m_dub = str[i];
           count = cur_count;
         }
   }
   return m_dub;
}

int main(){
std::string str;
std::getline(std::cin,str);
std::cout<<"Most dublicate element = "<<dublicate_letter(str);

return 0;

}    