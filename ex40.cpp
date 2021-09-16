#include<iostream>

int factorial(int n){
   if (n <= 1)
        return 1;
   else 
       return n*factorial(n-1);
}
int main(){
  int n{};
  std::cout<<"Enter number = ";
  std::cin>>n;
  std::cout<<"factorial = "<<factorial(n);
    
    return 0;
}