//An array can also be passed to a function as an argument.
//The parameter should be defined as an array using square brackets, when declaring the function.


#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for(int x = 0; x < size; x++) {
    cout << arr[x];
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  printArray(arr, 5);
}