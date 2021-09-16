#include<iostream>

void print_nums(int n){
   if (n < 0)
        return ;
   else 
       std::cout<< n <<" ";
       print_nums(n-1);
}
int main(){
  int n{};
  std::cout<<"Enter number = ";
  std::cin>>n;
  print_nums(n);

    return 0;

}