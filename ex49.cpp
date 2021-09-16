#include <iostream>

void print_to_k(int n, int k) {

    int new_num{}, count{};

    while (n > 0) {
        new_num = new_num * 10 + (n % 10);
        n /= 10;
    }
    while (new_num) {
      if(count == k){
        break;
      }
        std::cout << new_num % 10 ;
        new_num /= 10;
        count++;
    }
}
int main()
{
    int n{},k{};
    std::cout<<"Enter number = ";
    std::cin >> n;
    std::cout<<"Enter k = ";
    std::cin >> k;
    print_to_k(n,k);
}