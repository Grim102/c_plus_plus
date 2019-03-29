#ifndef API_H
#define API_H

#include<iostream>

using std::string;

class API
{
  protected:
    string url;
    string subfolder;

  public:
    API(string url, string subfolder = "");

    string call();
};

#endif //API_H