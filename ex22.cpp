#include <iostream>
int main()
{
    const int size = 4;
    int matrix[size][size]{};

    std::cout << "Enter matrix elements" << std::endl;
    for (int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++){
        std::cin >> matrix[i][j];
      }
    }

    for (int i = 0; i < size; i++) {
       std::cout<<matrix[i][i]<<" ";
    }

    return 0;
}