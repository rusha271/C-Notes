#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // Binary string

public:
    void read(void);
    void bin_check(void);
    void ones(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary::bin_check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
    cout<<"Correct Binary Format"<< endl;
}

void binary::ones(void)
{
    bin_check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        { 
            s.at(i) = '1'; 
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();      // Reads the binary number
    b.bin_check(); // Checks if the number is a valid binary
    b.display();
    b.ones();
    b.display();
    
    return 0;
}
