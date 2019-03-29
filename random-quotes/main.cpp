#include<iostream>
#include"include/API.hpp"

using std::cout;
using std::string;

int main()
{
  API simpsonsQuotes("thesimpsonsquoteapi.glitch.me", "/quotes");
  cout << simpsonsQuotes.call() << "\n";
  return 0;
}