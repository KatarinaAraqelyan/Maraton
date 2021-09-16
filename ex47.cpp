#include <iostream>
#include <string>

std::string revers(std::string str){
    std::string new_str;
    int index{};

    for(int i = str.length() - 1; i >= 0; i--){
      new_str += str[i];
    }
    return new_str;

}
int main()
{
   std::string str;
   std::getline(std::cin, str);
   std::cout<<revers(str);

    return 0;
}
