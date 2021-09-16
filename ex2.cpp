#include <iostream>

void number_digits(int n) {
  
    while (n ) {
        std::cout << n % 10 << " ";
        n /= 10;
    }
}
int main()
{
    int n{};
    std::cin >> n;
    number_digits(n);

    return 0;
}