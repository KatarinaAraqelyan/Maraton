#include <iostream>

bool prime(int number){
  bool x = true;
  if(number == 0 || number == 1){
    x = false;
  }
  for(int i = 2; i <= number/2; i++){
    if(number % i == 0){
      x = false;
    }
  }
  return x;
}
int main(){
  
  int number{};
  std::cout<<"Enter number = ";
  std::cin >> number;
  std::cout<<"Is number prime? = "<<prime(number);
  
   return 0;
}