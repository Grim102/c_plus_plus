//A program that generates psuedo-random strings of characters

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned seed = time(0);

   srand(seed);

   const int MIN_VALUE = 33,
             MAX_VALUE = 126;

   char num, repeat;

  do
  {

  int choice = 0;

   cout << endl << "Enter a number for the length of this password: ";
   cin >> choice;

   cout << endl << "Your new password:" << endl << endl;


   for (int i = 0; i < choice; i++)

   {

   num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

   cout << num;

   }

   cout << endl << endl << "Run program again? ";
   cin >> repeat;
   } while (repeat == 'y' || repeat == 'Y');
    return 0;
}

