#include<iostream>

int factorial(int n){
  int result{1};
   if (n <= 1)
        return 1;
   else 
       for(int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
}
int main(){
  int n{};
  std::cout<<"Enter number = ";
  std::cin>>n;
  std::cout<<"factorial = "<<factorial(n);

    return 0;

}