#ifndef RANDBASE_H
#define RANDBASE_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

class randBase
{
  protected:
    unsigned seed;
    int min, max;
    char character;

  public:
    randBase(int min, int max);
    
    virtual void run() = 0;
};

#endif //RANDBASE_H