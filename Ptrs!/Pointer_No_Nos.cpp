#include <iostream>

using namespace std;


int main(){
	

//things not to do!

//int *ptr = 5;
// A Points to a Address


// Should be like:

int x = 6;
int *ptr = &x;


ptr = &x;

cout<<*ptr<<endl;

}