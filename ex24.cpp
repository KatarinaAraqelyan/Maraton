#include <iostream>
int main()
{
    const int size = 4;
    int matrix[size][size]{};
    int sum{};
    std::cout << "Enter mtrix elements" << std::endl;
    for (int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++){
        std::cin >> matrix[i][j];
      }
    }
     
    for (int i = 0; i < size; i++) {
        sum += (matrix[i][size-1-i] + matrix[i][i]);
    }
    std::cout<< "Sum = " << sum;
    return 0;
}