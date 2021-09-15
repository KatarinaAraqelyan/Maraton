#include <iostream>

void number_digits(int n) {

    int new_num{};

    while (n > 0) {
        new_num = new_num * 10 + (n % 10);
        n /= 10;
    }
    while (new_num) {
        std::cout << new_num % 10 << " ";
        new_num /= 10;
    }
}
int main()
{
    int n{};
    std::cin >> n;
    number_digits(n);
}
