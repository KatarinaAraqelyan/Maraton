#include <iostream>

int number_digits_mul(int n) {

  int mul{1};
    while (n) {
        mul *= n % 10;
        n /= 10;
    }
    return mul;
}
int main()
{
    int n{};
    std::cin >> n;
    std::cout<<"Mul = "<<number_digits_mul(n);

    return 0;
}