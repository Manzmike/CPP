#include <stdio.h>

int main (){

	char c = 'A';
	char * c_ptr = & c;

	printf("c=%c, &c=%p\n", c , &c);

	printf("c_ptr = %p\n", c_ptr);

	printf("&c_ptr = %p\n", &c_ptr);

	printf("*c_ptr = %c\n", *c_ptr);

	char scaned_val;
	printf("input a new value: ");
	scanf("%c",&scaned_val);

	*c_ptr = scaned_val;

	printf("*c_ptr = %c\n", *c_ptr);




}