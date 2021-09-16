#include<iostream>

void print_nums(int n){
   for(int i = n; i >= 0; i--){
     std::cout << i << " ";
   }
}
int main(){
  int n{};
  std::cout<<"Enter number = ";
  std::cin>>n;
  print_nums(n);

    return 0;

}