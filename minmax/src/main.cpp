#include <iostream>
#include "function.h"
using namespace std;

int main()
{
  vector<int> vetor;
  int x;
  while (cin >> std::ws >> x)
  {
    vetor.push_back(x);
  }

  std::pair <size_t ,size_t> retorno = function::min_max(vetor.data(), vetor.size());

  cout << endl;
  cout << "Minimo: " << retorno.first << endl;
  cout << "Máximo: " << retorno.second << endl;

  return 0;
}