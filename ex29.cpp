#include <iostream>
int even_numbers_count(int size, int arr[]){
  int count{};
    for (int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0){
          count++;
        }
    }
    return count;
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout<<"Even numbers count = "<<even_numbers_count(size, arr);
    
    return 0;
}
