#include <iostream>
void binary(int number){
  int x[10];
  int index{};
   while(number){
     x[index] = number % 2;
     index++;
     number /=2;
   }
   for(int i = index -1 ; i >= 0; i--){
     std::cout<<x[i];
   }
}
int main()
{
    int  number;
    std::cin >> number;
    binary(number);

    return 0;
}
