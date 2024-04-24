#include <stdio.h>


int main(){
	

char *char_ptr;

char my_name_first;
char my_name_last;

// Read two characters from the user
printf("Enter the first initial of your name: ");
scanf("%c", &my_name_first);
getchar(); // This consumes the newline character after the first input
printf("Enter the last initial of your name: ");
scanf("%c", &my_name_last);

// Calculate the size of the variables
int size_first = sizeof(my_name_first);
int size_second = sizeof(my_name_last);

// Output the results
printf("First initial: %c, Size: %d bytes\n", my_name_first, size_first);
printf("Last initial: %c, Size: %d bytes\n", my_name_last, size_second);

//char_ptr = &my_name_last;



}