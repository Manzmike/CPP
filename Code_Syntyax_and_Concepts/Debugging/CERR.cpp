#include <iostream>
using namespace std;

int getValue()
{
cerr << "getValue() called\n";
	return 4;
}

int main()
{
cerr << "main() called\n";
    //Inncorrect way
    //cout << getValue << '\n';


	//correct way
	cout << getValue() << '\n';

    return 0;
}

// The complier shoudl print 1 instead of 4 here is the reason why:

/*

The rewason is becasue we forgot the parathese around the getValue() function :

getValue();



*/