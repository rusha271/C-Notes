#include<iostream>
using namespace std;

class Bank{
    int principal;
    int years;
    float intrestrate;
    float returnvalue;

    public:
        Bank(){}
        Bank(int p , int y , float r);
        Bank(int p , int y , int r);
        void show();
};


Bank :: Bank(int p , int y , float r ){
    principal = p;
    years = y;
    intrestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y ; i++)
    {
        returnvalue = returnvalue * (1+intrestrate);
    }
    
}

Bank :: Bank(int p , int y , int r ){
    principal = p;
    years = y;
    intrestrate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < y ; i++)
    {
        returnvalue = returnvalue * (1+intrestrate);
    }
    
}

void Bank :: show(){
    cout<<endl<<"Principal amount "<<principal  
        <<"Return value after years"<<years
        <<" is "<<returnvalue<<endl;
}

int main(){

    return 0;
}