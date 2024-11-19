#include <iostream>

using namespace std;

int sumofN(int n)
{
  if (n == 0)
   {
    return 0;
   }

   int recursiveFunctionValue = n + sumofN(n-1);

   return recursiveFunctionValue;
}

int main()
{
  cout << "Enter a number" << "\n";
  int n;
  cin >> n;
  
  int sum = sumofN(n);

  cout << "Sum of first " << n << " natural numbers is " << sum;

  return 0;
}
