#include <iostream>

int Max(int n){
   int max = n % 10;   
    while (n) {
       int current = n%10;
       if( max < current){
           max = current;
       } 
       n /= 10;
    }
    return max;
}

int Min(int n){
   int min = n % 10;   
    while (n) {
       int current = n%10;
       if( min > current){
           min = current;
       } 
       n /= 10;
    }
    return min;
}

int main()
{
   int number = 0;
   std::cin>>number;
   int max = Max(number);
   int min = Min(number); 

   std::cout << "Max = "<< max << std::endl;
   std::cout << "Min = "<< min << std::endl;

   return 0;
}
