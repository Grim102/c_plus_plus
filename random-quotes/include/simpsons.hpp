#ifndef SIMPSONS_H
#define SIMPSONS_H

#include"api.hpp"

class simpsons : public api
{
  public:
    simpsons(string url, string subfolder) : api(url, subfolder){}

    json getData();
};

#endif //SIMPSONS_H