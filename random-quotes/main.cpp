#include<iostream>
#include"include/api.hpp"

using std::cout;
using std::string;

int main()
{
  api simpsonsQuotes("thesimpsonsquoteapi.glitch.me", "/quotes");
  cout << simpsonsQuotes.call() << "\n";
  return 0;
}