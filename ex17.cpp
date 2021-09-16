#include <iostream>
int Min_index(int size, int arr[]){
 int min = arr[0];
 int min_index = 0;
    for (int i = 0; i < size; i++) {
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int max_index = Min_index(size,arr);
    std::cout << "Min index  = " << max_index << std::endl;
    
    return 0;
}
