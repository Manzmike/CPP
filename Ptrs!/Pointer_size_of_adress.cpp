#include <iostream>

using namespace std;




int main(){
	
	char character{};
	int integer{};
	double decimal{};

	char *char_ptr = &character;
	int *int_ptr = &integer;
	double *double_ptr = &decimal;


	cout<<"size of char:"<<sizeof(char_ptr)<<endl;
	cout<<"size of int:"<<sizeof(int_ptr)<<endl;
	cout<<"size of double:"<<sizeof(double_ptr)<<endl;



}