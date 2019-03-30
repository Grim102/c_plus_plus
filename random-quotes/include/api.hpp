#ifndef API_H
#define API_H

#include<iostream>

using std::string;

class api
{
  protected:
    string url;
    string subfolder;

  public:
    api(string url, string subfolder = "");

    string call();
};

#endif //API_H