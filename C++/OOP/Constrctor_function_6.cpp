/*
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    1. Constructor is special type of function has same name and automatically called when class is called.
    2. it is used to initializ the objects.


public:
    Complex(int, int);

    void printnumber()
    {
        cout << "Your numbers of is " << a << " + " << b << "i ." << endl;
    }
};

Complex ::Complex(int x, int y) //--> parametrized constructor
{
    a = x;
    b = y;
}

  Default Constructor

Complex :: Complex(void){
    a = 10;
    b = 0;
}


int main()
{
    // implicit call
    Complex c(4, 7);
    c.printnumber();

    //explicit call
    Complex c1 = Complex(5,7);
    c1.printnumber();

    return 0;
}

*/

#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
    friend void Distance(Point o1 , Point o2);
    public:
        Point(int a , int b){
            x = a;
            y = b;
        }

        void Displaypoint(void){
            cout<<"The coordinate is ("<<x<<","<<y<<")"<<endl;
        }
};

void Distance(Point o1, Point o2){
    float dist;
    dist = sqrt(pow(o2.x - o1.x,2)+pow(o2.y - o1.y , 2));
}


int main()
{   
    Point p1(1,1);
    p1.Displaypoint();

    Point p2(5,7);
    p2.Displaypoint();

    Distance(p1,p2);

    return 0;
}