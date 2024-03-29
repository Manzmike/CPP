#include <iostream>


using namespace std;




void Pointer_and_Array_1(){
int n = 10; // decelraation to how many values are in it.  

int *ptr = new int[n]; //allocation with this value with n amount of memory

for(int i = 0; i < n; i++){
	ptr[i] = i * 10;
}

for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
}	

delete[] ptr;


for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
}	

}



int main(){
	
Pointer_and_Array_1();
	
}