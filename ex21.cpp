#include <iostream>
void two_arrays_sum(int size, int arr1[],int arr2[]){
    for (int i = 0; i < size; i++) {
        std::cout << arr1[i] + arr2[i] << " ";
    }
}
int main()
{
    const int size = 7;
    int arr1[size]{};
    int arr2[size]{};

    std::cout << "Enter first array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr1[i];
    }
    std::cout << "Enter second array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr2[i];
    }
    std::cout<< "Result " << std::endl;
   two_arrays_sum(size, arr1,arr2);
    
    return 0;
}