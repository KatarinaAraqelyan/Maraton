#include <iostream>

void m_to_k(double number){
  std::cout << "result = "<< number/1000.0 <<"km"<< std::endl;
}
int main()
{
    int number = 0;
    std::cout << "Enter number" << std::endl;
    std::cin >> number;
    m_to_k(number);

    return 0;
}
