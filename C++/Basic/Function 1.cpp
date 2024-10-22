/*
@@@@ Code 1 : Print all prime numbers between 2 given number 


#include <iostream>
using namespace std;
#include <math.h>

bool isPrime(int num){
    for(int i = 2 ; i <=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a , b;
    cin>>a>>b;

    for(int i = a ; i <= b ; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}
*/


/*

@@@ Code 2 : Fibenacci Series 


0,1,1,2,3,5,8,13.....

Here the first and second term is 0 , 1




#include <iostream>
using namespace std;

// Here there is nothing we returning we are just printitng 
void fib(int num){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i = 1 ; i <= num ; i++){
        cout<<t1<<" ";
        nextTerm = t1+t2;
        t1 = t2; 
        t2=nextTerm;
    }
    return ;
}

int main(){

    int n;
    cin>>n;

    fib(n);

    return 0;
}

*/


/*


@@@@@ Code 3 : factorial 

5 -> 5 * 4 * 3 * 2 * 1 = 120

#include <iostream>
using namespace std;

int fact(int num){
    int sum = 1;
    for(int i = num ; i>=1 ; i--){
        sum = sum * i
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    fact(n);
    retrun 0;
}

*/


/*

@@@@@ Code 4 : Calculate nCr


#include <iostream>
using namespace std;

int fact(int num){

    int sum = 1;
    for(int i = n ; i>=1 ; i--){
        sum *= i;
    }
    return sum;
}

int main(){

    int n,r;
    cin>>n>>r;
    cout<<>>endl;

    int nCr = fact(n) / (fact(r)*fact(n-r));
    cout<<nCr<<endl;

    return 0;
}

*/

