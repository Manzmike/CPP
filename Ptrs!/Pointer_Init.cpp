#include <iostream>
using namespace std;

int main(){
	
int x = 5;

int *ptr;
// uninitalized pointer to a garbage address


int *ptr2 = 0;
//a null pointer 


int *ptr3 = &x;
//


cout<< "ptr:" << ptr << endl << "ptr2:" << ptr2 << endl << "ptr3:" << ptr3 << endl;

}