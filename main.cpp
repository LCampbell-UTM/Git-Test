#include <iostream>

int sum(int sumInput)
{
  int total = 0;

  for(int i=1;i<sumInput;i++)
    {
      total+=i;
    }

  return total;
}

double product(int prodInput)
{
  double multTotal = 0;
  double temp;

  for(int i=1;i<prodInput+1;i++)     // the idea is n*1 + n*2 + n*3 ... 5*n = x. At least thats what I gathered we were supposed to do. I figured if it should be a factorial, that word would've been used somewhere.
    {
      temp = prodInput * i;
      multTotal+=temp;
      temp = 0;
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

  int sumOutput = sum(num);
  double prodOutput = product(num);
  
  std::cout << "From 1 to " << num <<", the iterative sum toal is: " << sumOutput << std::endl;
  std::cout << "From 1 to " << num <<", the iterative product total is: " << prodOutput << std::endl;
  
  return 0;
}
