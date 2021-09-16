#include <iostream>
void print(int size, int arr[]){
    static int i = 0;
    if (i == size) {
        return;
    }
    std::cout << arr[i] << " ";
    i++;

    print(size,arr);
}
int main()
{
    const int size = 7;
    int arr[size]{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    print(size, arr);
    
    return 0;
}
