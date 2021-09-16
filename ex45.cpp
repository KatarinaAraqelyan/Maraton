#include <iostream>

int fibonacci(int n)
{
    int x{},y{1},tmp{};
    for (int i = 2; i <= n; i++) 
    {
        tmp = y + x;
        x = y;
        y = tmp;
    }
    return tmp;
}

int main(){
  int n{};
  std::cout<<"Enter number = ";
  std::cin>>n;
   std::cout<<"fibonacci = "<<fibonacci(n);

       return 0;

}