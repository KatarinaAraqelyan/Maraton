#include <iostream>

void dec_to_hex(int num){
    char hex[10];
     int c{},j{};
      while(num > 0){
      c = num % 16;
      if(c<10){
          hex[j] = c + 48;
      }
      else hex[j] = c + 55;
      j++;
      num /= 16;
}
for (int i = j - 1; i >= 0; i--) {
    std::cout << hex[i];
}
}
int main()
{
  int temp,num,j=1,r;
  char hex[50];
  std::cout << "Enter number" << std::endl;
  std::cin >> num;
  dec_to_hex(num);

  return 0;
}