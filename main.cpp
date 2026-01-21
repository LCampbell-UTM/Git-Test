#include <iostream>

int sum(int input)
{
  int total = 0;

  for(int i=0;i<input+1;i++)
    {
      total+=i;
    }

  return total;
}


int main()
{

  std::cout << "Hello world!" << std::endl;

  std::cout << "\n";

  std::cout << "Enter a number: ";

  int num;

  std::cin >> num;

  int output = sum(num);
  
  std::cout << "From 1 to " << num <<", the sum iterative sum toal is: " << output << std::endl;
  
  return 0;
}
