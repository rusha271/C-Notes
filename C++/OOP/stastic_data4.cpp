#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setID(void)
    {
        cout << "Enter ID " << endl;
        cin >> id;
        count++;
    }

    void DisplayID(void)
    {
        cout << "The ID of an employee is " << id << " with number of people in group " << count << endl;
    }

    /*
    Static function can only access of the static memebers only
    */
    static void getCount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

int Employee ::count;

/*
Here the static keyword is used when i create the employeee object the starting value of count will be 0
so the count variable is gloabl varaible or inshort class property not object property
*/

int main()
{

    Employee e1, e2, e3;
    e1.setID();
    e1.DisplayID();
    Employee::getCount();

    e2.setID();
    e2.DisplayID();
    Employee::getCount();

    e3.setID();
    e3.DisplayID();
    Employee::getCount();

    return 0;
}