#include"../include/randBase.hpp"

randBase::randBase(int min, int max)
{
  srand(this->seed);
  this->min = min;
  this->max = max;
}