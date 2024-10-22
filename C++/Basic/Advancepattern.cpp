// This is Inverted pattern

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j = n+1-i ; j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }

    return 0;
}

*/


// Below exmaple is the 0-1 pyramid 

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

rows : 1 to n
columns : 1 to rows no
elements : if (i+j) / 2 is even then it is 1
           else it is odd then 0




#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    for(int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            if((i+j)%2 == 0){
                cout<<" 1";
            }else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
    return 0;
}


*/



//Rhombus pattern 

/*
    *****
   *****
  *****
 *****
*****

n=5


rows : 1 to n
columns : 
        -> Space " " is n to 1 - no rows
        -> Stars "*" is 1 to n



#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1 ; i<=n;i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j <= n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


*/


// Number Pattern

/*

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

rows : 1 to  n
columns : 
        -> " " 1 to n - no rows 
        ->  j  1 to no of rows

elements : j 


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n - i; j++){
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/

// Palindromic pattern


/*

        1
      2 1 2 
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5


rows : 1 to n 
columns :
        -> " " 1 to n rows
        -> k = row no , k-- , n - row to n 
        -> k = 2 , k++ , n to n+row no - 1       



#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i = 1 ; i<=n; i++){
        int j;
        for(j = 1 ; j<=n-i;j++ ){
            cout<<" ";
        }
        int k = i;
        for(;j<=n;j++){
            cout<<k--;
        }
        k = 2;
        for(;j<=n + i-1;j++){
            cout<<k++;
        }

        cout<<endl;
    }

    return 0;
}

*/


// Star Pattern 



/*


   *    
  ***
 *****
*******
*******
 *****
  ***
   *




#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = 1 ; i<= n ; i++){
        for(int j = 1 ; j <= n-i;j++){
            cout<<" ";
        }
        for(int j = 1 ; j <= 2*i - 1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


*/




