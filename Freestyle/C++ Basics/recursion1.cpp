//Recursion


//A recursive function in C++ is a function that calls itself.


int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}