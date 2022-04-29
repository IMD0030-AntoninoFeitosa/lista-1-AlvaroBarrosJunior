#include <iostream>
#include "function.h"
using namespace std;

int main()
{
  function::Ponto IE, SD, p;
  function::location_t local;

  cin >> IE.x >> IE.y;

  cin >> SD.x >> SD.y;

  cin >> p.x >> p.y;

  if (IE.x > SD.x)
  {
    int temp;
    temp = IE.x;
    IE.x = SD.x;
    SD.x = temp;
  }
  if (IE.y > SD.y)
  {
    int temp;
    temp = IE.y;
    IE.y = SD.y;
    SD.y = temp;
  }

  local = function::pt_in_rect(IE, SD, p);
  cout << local << endl;

  return 0;
}