// OOP


#include <iostream>

using namespace std;

struct Date
{
	//using struct to outline the details of the day,month,year
	int day{};

	int month{};

	int year{};
};


void PrintDate(const Date& date){
	//printing out date. 
	cout<< date.day << "/" << date.month << "/" << date.year;
}



int main(){
	Date date {4 , 15 , 21};
	/* Struct can also be called liek this:  

	Date date = { 4 ,15 , 21};


	*/


	PrintDate(date);

	return 0;

}