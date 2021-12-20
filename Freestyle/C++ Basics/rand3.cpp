#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}


//Using the modulo helps generate random numebrs from 1 to 6
