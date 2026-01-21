#include <iostream>

int sum(int input)
{
  int total = 0;

  for(int i=1;i<input;i++)
    {
      total+=i;
    }

  return total;
}

int product(int input)
{
  int multTotal = input;
  int temp;

  for(int i=1;i<input++;i++)
    {
      temp = input * i;
      multTotal+=temp;
    }
  
  return multTotal;
}


int main()
{

  std::cout << "Hello world!" << std::endl;

  std::cout << "\n";

  std::cout << "Enter a number: ";

  int num;

  std::cin >> num;

  int output = sum(num);
  int multOutput = product(num);
  
  std::cout << "From 1 to " << num <<", the iterative sum toal is: " << output << std::endl;
  std::cout << "From 1 to " << num <<", the iterative product total is: " << multOutput << std::endl;
  
  return 0;
}
