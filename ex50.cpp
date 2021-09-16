#include <iostream>
int arithmetic_average(int size, int arr[]){
 int sum{},mul = 1;

    for (int i = 0; i < size; i++) {
       sum += arr[i];
       mul *= arr[i];
    }
    return (sum + mul)/2;
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Result  = " << arithmetic_average(7,arr) << std::endl;
    
    return 0;
}