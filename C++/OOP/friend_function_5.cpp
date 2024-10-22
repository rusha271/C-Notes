#include <iostream>
using namespace std;

// forward declartion
class Complex;

class Claulator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int complexRealSum(Complex, Complex);
};

class Complex
{
    int a;
    int b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // paticual function has access of private member
    friend Complex ComplexSum(Complex o1, Complex o2);

    // class has access of private member
    friend class Claulator;

    void printNumber()
    {
        cout << "Your numbers are " << a << " + " << b << "i" << endl;
    }
};

Complex ComplexSum(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int Claulator ::complexRealSum(Complex o1, Complex o2)
{
    return (o1.a + o2.b);
}

int main()
{
    Complex c1, c2, c3;

    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    c1.printNumber();
    c2.printNumber();

    c3 = ComplexSum(c1, c2);
    c3.printNumber();

    return 0;
}
