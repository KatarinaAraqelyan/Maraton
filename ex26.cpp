#include <iostream>
#include <cmath>

int main(){
  int a{}, b{}, c{}, d{};
  double x1{}, x2{};
  std::cout << "Qarakusayin havasarman tesqy = ax2+bx+c=0" <<std::endl;
  std::cout << "a = ";
  std::cin >> a;
  std::cout << "b = ";
  std::cin >> b;
  std::cout << "c = ";
  std::cin >> c;
  
  d = pow(b,2) - (4 * a * c);

  if(d < 0){
    std::cout<<"Armat chuni";
  }
  else if( d == 0){

    x1 = x2 = (- b) / (2*a);
    std::cout<< "x = " <<x1;
  }
  else{
    x1 = -(b + sqrt(d)) / (2*a);
    x2 = -(b - sqrt(d)) / (2*a);

    std::cout<< "x1 = " <<x1 <<std::endl;
    std::cout<< "x2 = " <<x2;
  }
}