#include<iostream>

struct Point{
 double x;
 double y;
};

struct Line{
 Point arr[10];
};

int main(){
Line line1;

for(int i = 1; i <= 4; i++){
   line1.arr[i].x = i;
   line1.arr[i].y = i;
}
for(int i = 1; i <= 4; i++){
   std::cout<<line1.arr[i].x<<" ";
   std::cout<<line1.arr[i].y;
   std::cout<<std::endl;
}
 return 0;
}