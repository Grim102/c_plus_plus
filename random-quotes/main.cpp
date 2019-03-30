#include<iostream>
#include"include/api.hpp"
#include"include/simpsons.hpp"

using std::cout;
using std::string;

int main()
{
  simpsons s("thesimpsonsquoteapi.glitch.me", "/quotes");
  s.getData();

  return 0;
}