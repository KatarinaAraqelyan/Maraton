#include <iostream>
int main()
{
    const int size = 4;
    int index{};
    int matrix[size][size]{};
    int arr[size * size]{};
    std::cout << "Enter mtrix elements" << std::endl;
    for (int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++){
        std::cin >> matrix[i][j];
      }
    }

    for (int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++){
        arr[index] = matrix[i][j];
        index++;
      }
    }
    std::cout<<"Array =  ";
    for(int i = 0; i< size*size; i++){
      std::cout<<arr[i]<<" ";
    }
    
    return 0;
}