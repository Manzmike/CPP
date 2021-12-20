#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    srand(0);
    int range;
    cin >> range;
    //your code goes here
    for (int i = 0; i < 4; i++){
            cout<<rand()%range+1;
        }
    
    return 0;
}
