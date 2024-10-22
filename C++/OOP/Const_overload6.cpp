#include <iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(int x, int y) //--> parametrized constructor
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

    Complex(){
        a = 0;
        b = 0;
    }

    void printnumber()
    {
        cout << "Your numbers of is " << a << " + " << b << "i ." << endl;
    }
};



int main()
{
    // implicit call
    Complex c(4, 7);
    c.printnumber();

    return 0;
}
