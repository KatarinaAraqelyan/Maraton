#include <iostream>

void foo(int n){
for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
	{
	  std::cout << "*";
	}
      std::cout << std::endl;
    }
}
int main ()
{
  int n{};
  std::cin >> n;
  foo(n);
  
  return 0;
}

