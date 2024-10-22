/*
class {{derived_class}} : {{visisblity mode}} {{base-class-name}}{
    class memeber/methods etc..

};

Notes :
1. Deafult visiblity mode is private
2. Private : Public memebrs of base class become private memebrs in dervied class
3. Public : Public memebrs of base class become public memebrs in dervied class
4. Private memebrs never be inherta 



*/
#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

    // Parameterized constructor
    Employee(int inputid)
    {
        id = inputid;
        salary = 34.0;
    }

    // Default constructor
    Employee() {}
};

// Public inheritance
class Programmer : public Employee
{
public:
    int lancode = 9;

    // Constructor that calls the base class constructor
    Programmer(int inputid) : Employee(inputid)
    {
    }
};

int main()
{
    Programmer p1(1);
    cout << "Programmer ID: " << p1.id << endl;
    cout << "Programmer salary: " << p1.salary << endl;
    cout << "Language code: " << p1.lancode << endl;

    return 0;
}
