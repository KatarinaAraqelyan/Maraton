#include <iostream>
int Sum(int size, int arr[]){
 int min = arr[0];
 int max = arr[0];
    for (int i = 0; i < size; i++) {
        if(arr[i] < min){
            min = arr[i];
        }
         if(arr[i] > max){
            max = arr[i];
        }
    }
    return min + max;
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int sum = Sum(size,arr);
    std::cout << "Sum = " << sum << std::endl;
    
    return 0;
}
