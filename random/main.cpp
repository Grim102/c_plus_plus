#include <iostream>
#include <cstdlib>
#include <ctime>

#include"include/randBase.hpp"
#include"include/randString.hpp"

int main()
{
  char repeat;
  randBase *base;

  base = new randString();

  do
  {
    base->run();
    cout << endl << endl << "Run program again? ";
    cin >> repeat;
   } while (repeat == 'y' || repeat == 'Y');
   
    return 0;
}

