#include <iostream>
void calculator(int num1, int num2,int symbol){
  switch(symbol){
       case '+': std::cout << "number1 + number2 = "<<num1 + num2 << std::endl;
       break;
       case '-': std::cout << "number1 - number2 = "<<num1 - num2 << std::endl;
       break;
       case '*': std::cout << "number1 * number2 = "<<num1 * num2 << std::endl;
       break;
       case '/': std::cout << "number1 / number2 = "<< num1 / num2<< std::endl;
       break;
   }
  
}
int main(){
   int num1 = 0;
   int num2 = 0;
   std::cout << "enter number 1" << std::endl;
   std::cin>> num1;
   std::cout << "enter number 2" << std::endl;
   std::cin >> num2;
   char symbol = ' ';
   std::cout << "enter symbol" << std::endl;
   std::cin >> symbol;
   calculator(num1, num2,symbol);

   return 0;
}