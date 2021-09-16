#include <iostream>
int main()
{
    const int size = 4;
    int matrix[size][size]{};
    int tmp{};
    std::cout << "Enter mtrix elements" << std::endl;

    for (int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++){
        std::cin >> matrix[i][j];
      }
    }
     
    for (int i = 0; i < size; i++) {
        tmp =  matrix[i][size-1-i];
        matrix[i][size-1-i] =  matrix[i][i];
         matrix[i][i] = tmp;
    }

    std::cout<<std::endl;

     for (int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++){
        std::cout << matrix[i][j]<< " ";
      }
          std::cout<<std::endl;
    }
       
    return 0;
}