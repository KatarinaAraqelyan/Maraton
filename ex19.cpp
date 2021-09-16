#include <iostream>
void print_reverse(int size, int arr[]){
    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    print_reverse(size, arr);
    
    return 0;
}
