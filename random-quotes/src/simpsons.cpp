#include"../include/simpsons.hpp"

json simpsons::getData()
{
  string str = this->call();
  json j = json::parse(str);
  // std::cout << std::boolalpha;
  // std::cout << (j.type() == json::value_t::array) << "\n";

  for(auto out : j)
    std::cout << out <<"\n";

  return j;
}