#include <iostream>
int Max_index(int size, int arr[]){
 int max = arr[0];
 int max_index = 0;
    for (int i = 0; i < size; i++) {
        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int max_index = Max_index(size,arr);
    std::cout << "Max index  = " << max_index << std::endl;
    
    return 0;
}
