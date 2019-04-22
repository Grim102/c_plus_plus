#ifndef RANDSTRING_H
#define RANDSTRING_H

#include"randBase.hpp"

class randString : public randBase
{
  public:
    randString() : randBase(33, 126){}

    void run();
};

#endif //RANDSTRING_H