#include <iostream>

using namespace std;

int main(){
//Values	
int i = 8;
double d = 9.2;

// Ptrs decleration
int *int_Ptr = (&i);
double *double_Ptr = (&d);

//Derefferecning the Pointer
cout<< "Int_ptr" << *int_Ptr <<endl;


//Dereferecning the Pointers
cout<< "Double_Ptr" << *double_Ptr<<endl;

//Unable to declare a Pointer of 2 diffrent types to 2 diffret values. 


}