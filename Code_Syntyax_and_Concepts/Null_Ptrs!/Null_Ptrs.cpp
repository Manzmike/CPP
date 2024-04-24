// Null poointer not poitner pointing to no address and not being deligated to a vlaue.  

#include <iostream>

using namespace std;


void ptr_base_example(){

/*With a pointer not holding a address,
then we have then allocated the pointer to be in a stance of as a null ptr
*/

int *ptr{};

}








void nullptr_keyword(){
/*
similar to the keywords True and False which represent Boolean luteral values. 
The Keyword nullptr represents the keyqword null_ptr. 
We can then intialize a pointer with the value of Null similair to how the NULL space works. 
The nullptr does not allocate annything to the pointer itself but other alligns the ptr to pointing to nothing. 

*/

int *ptr = nullptr; // for init decalred values. 
//or
int *ptr2 {nullptr}; // for Arrays

//it such as useful when deallocation of what a value holds. 
//Example:

int x = 6;
int *ptr3 = &x;


cout<<"Value of freeptr before nullptr:"<<ptr3<<endl;
ptr3 = nullptr;
cout<<"Value of freeptr after nullptr:"<<ptr3<<endl;

}





void dereferencing_pointer_from_nullptr(){
	// by Dereferencing your ptrs using the nullptr this wuill cause undefined behavior.
	//example:

	int x = 9;
	int *ptr = &x;
	

}







int main(){
// a null pointer is a poitner that points to nothing.
// in previous examples pointers have pointed to a adress but for now we have thing pointint to nothing 


//base example.   	
ptr_base_example();


//nullptr keyword!
nullptr_keyword();


return 0;
}