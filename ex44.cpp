#include <iostream>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
  int n{};
  std::cout<<"Enter number = ";
  std::cin>>n;
   std::cout<<"fibonacci = "<<fibonacci(n);

       return 0;

}