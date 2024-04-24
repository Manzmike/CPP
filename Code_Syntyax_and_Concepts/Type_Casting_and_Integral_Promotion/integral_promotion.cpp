#include <iostream>
#include <string>
using namespace std;

void printStringValue(char x){
	cout<<x<<endl;
}

void printIntegerValue(int x){
	cout<<x<<endl;
}

int main(){
	short s = 3; // or could do short s{3};
	unsigned int unsigned_int = 34;
	char unsigned_char = 89;



	printStringValue(unsigned_int);
	printIntegerValue(unsigned_int);

	printStringValue(unsigned_char);
	printIntegerValue(unsigned_char);

	printIntegerValue(s); // prints the numerial value of s which is equal to 3

	printStringValue('a');
	printIntegerValue('a'); // prints the numerial value of 'a'

	printIntegerValue(true); // prints the numerial value of 'true'


 
}