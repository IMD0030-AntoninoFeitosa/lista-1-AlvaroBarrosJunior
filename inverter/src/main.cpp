#include <iostream>
#include "function.h"
using namespace std;

int main()
{
  array<string, 4> A = {"um", "dois", "três", "quatro"};
  
  function::reverse(A);

  return 0;
}