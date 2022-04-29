#include <iostream>
#include "function.h"
using namespace std;

int main()
{
  int x;
  cin >> x;

  vector<unsigned int> fibonacci;
  fibonacci = function::fib_below_n(x);

  cout<<"{";
  for (int i = 0; i < fibonacci.size(); i++){
    cout << fibonacci[i];
    if (i != fibonacci.size()-1){
      cout << ", ";
    }
  }
  cout<<"}"<<endl;

  return 0;
}