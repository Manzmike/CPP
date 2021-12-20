#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:

    Painting(string name){
     cout<<name;
    }

    private:
    string name;
        
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}