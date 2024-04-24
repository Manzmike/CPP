#include <iostream>

using namespace std;

void SetUp(){

    #if defined(_WIN32) || defined(_WIN64)
        std::cout << "Windows OS\n";
    #elif defined(__unix__) || defined(__unix)
        std::cout << "Unix-like OS\n";
    #elif defined(__APPLE__) || defined(__MACH__)
        std::cout << "Mac OS\n";
    #elif defined(__linux__)
        std::cout << "Linux OS\n";
    #else
        std::cout << "Unknown OS\n";
    #endif

}


int main(){
	SetUp();

	//Char16_t
	cout<<"Size of Char16_t is:"<<sizeof(signed char)<<endl;

	cout<<endl;


	//Char32_t
	cout<<"Size of Char32_t is:"<<sizeof(signed char)<<endl;

	cout<<endl;


	//wChar_t
	cout<<"Size of WChar_t is:"<<sizeof(signed char)<<endl;

	cout<<endl;

	//Char
	cout<<"Size of Signed Char is:"<<sizeof(signed char)<<endl;

	cout<<"Size of Unsigned Char is:"<<sizeof(unsigned char)<<endl;

	cout<<"Size of Char is:"<<sizeof(signed char)<<endl;

	cout<<endl;
	//Int 

	cout<<"Size of Signed Short is:"<<sizeof(signed short)<<endl;

	cout<<"Size of Unsigned Short is:"<<sizeof(unsigned short)<<endl;

	cout<<"Size of Short is:"<<sizeof(char)<<endl;
	
	cout<<endl;
	//Long

	cout<<"Size of Unsigned Long is:"<<sizeof(unsigned long)<<endl;

	cout<<"Size of Signed Long is:"<<sizeof(signed long)<<endl;

	cout<<"Size of Long is:"<<sizeof(long)<<endl;

	cout<<endl;
	//Long Long

	cout<<"Size of Signed Long Long is:"<<sizeof(signed long long)<<endl;

	cout<<"Size of Unsigned Long Long is:"<<sizeof(unsigned long long)<<endl;

	cout<<"Size of Long Long is:"<<sizeof(long)<<endl;

	cout<<endl;
	//Float

	cout<<"Size of Float is:"<<sizeof(float)<<endl;

	cout<<endl;
	//Double

	cout<<"Size of Double is:"<<sizeof(double)<<endl;


	cout<<endl;
	//Long Double

	cout<<"Size of Long Double is:"<<sizeof(long double)<<endl;

	cout<<endl;
	//Boolean

	cout<<"Size of Bool is:"<<sizeof(bool)<<endl;




}