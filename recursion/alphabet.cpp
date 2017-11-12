//A recursive function that ouputs the alphabet

#include <iostream>

using std::string;
using std::cout;
using std::endl;

string alphabet(char alpha = 'a') {
    if (alpha == 123)
        return "";
    else
        return alpha + alphabet(alpha + 1);
}

int main() {
    cout << alphabet() << endl;
    return 0;
}