/*Class constructors are special member functions of a class. They are executed whenever new objects are created within that class.

The constructor's name is identical to that of the class. It has no return type, not even void.*/


#include <iostream>
using namespace std;

class myClass {
    public:
        myClass() {
            cout <<"Hey";
        }
        void setName(string x) {
            name = x;
        }
        string getName() { n 
            return name;
        }
    private:
        string name;
};

int main() {
    myClass myObj;

    return 0;
}