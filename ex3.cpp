#include <iostream>

int number_digits_sum(int n) {

  int sum{};
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n{};
    std::cin >> n;
    std::cout<<"Sum = "<<number_digits_sum(n);

    return 0;
}