/*Your usual order at your favorite cafe is black tea, which the waiter brings you by default. Today, however, you are with your friend and it is his first time there. Obtain your friend's order in one word as input, and place the order for both of you. Complete the function so that it will output "Black tea" by default (without an argument) and then your friend's order as an argument.
*/

#include <iostream>
#include <string>
using namespace std;

//complete the function with one default argument
void printOrder(string friendOrder) {
    cout<<"Black tea"<<endl;
    cout<<friendOrder;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;
    
    printOrder(friendOrder);
    
    return 0;
}