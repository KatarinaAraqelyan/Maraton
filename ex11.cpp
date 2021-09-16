#include<iostream>

int main(){

for(int i = 1; i <= 4; i++){

 for(int j = 1; j <= 4 -i; j++){
   std:: cout<<"  ";
 }
 for(int k = 0; k < 2*i-1; k++){
   std:: cout<<"* ";   
 }
 std::cout<<std::endl;
}

for(int i = 0; i <= 4; i++){
  for(int j = 0; j <= 6; j++){
     std::cout<<"= ";
  }
   std::cout<<std::endl;
}
}