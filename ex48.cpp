#include <iostream>
void remove(int size, int arr[], int index){

    int new_arr[size - 1], j{};

    for(int i = 0; i < size; i++){
      if(i == index){
        continue;
      }
      new_arr[j] = arr[i];
      j++;
    }

    for(int i = 0; i < j; i++){
      std::cout<<new_arr[i] << " ";
    }

}
int main()
{
    const int size = 7;
    int arr[size]{},index{};
    std::cout << "Enter array elements" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter index = ";
    std::cin >> index;
    remove(size, arr, index);

    return 0;
}
