#include"../include/simpsons.hpp"

json simpsons::getData()
{
  string str = this->call();
  json j = json::parse(str);
  std::cout << j.dump() << "\n";
  return j;
}