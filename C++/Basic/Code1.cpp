/* 

@@@@ This Code 1 : Prime or Not ?

// Check whether the number is prime or not

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool flag = 0
    for(int i = 2 ; i<=sqrt(n);i++){        // we use the square root because if the given number is evenly distrubted or not
        if(n%2==0){
            cout<<"Non Prime"<<endl;
            flag=1;
            break;
        }
    }

    if(flag == 0){
        cout<<"Prime Number"<<endl;
    }

    return 0;
}


//In simpler terms: Using the square root helps us quickly check if a number can be divided evenly into smaller parts, saving us from doing lots of extra work.

*/


/*

@@@@@ Code 2 : Reverse a Given Number 

// Reverse a given number 
// like 1234 to 4321

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int revers;
    while(n>0){
        int lastdigt = n%10;    // this will get me last digit of the number 
        revers = revers*10 + lastdigt;  // 14 -> 41 if we revers += lastdigt then it will 5 at the end so we use this 
        n = n/10;       // for geting the next number we have to remove the lastdigit so 1234 / 10 -> 123
    }
    cout<<revers<<endl;
    return 0;
}


*/


// Check if a given number is Armstrong number or not

/*

@@@@ Code 3 : Armstrong 


In Armstrong the given number is n if we take indivual number of n and do it cube and then add that number then we will get n number  

Ex : 153 -> 1^3 + 5^3 + 3^3 = 153


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    int orignal = n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10;
    }

    if(orignal == sum){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }

    return 0;

}


*/