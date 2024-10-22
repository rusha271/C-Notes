// Below is example of hollow star pattern

/*

*****
*   *
*   *
*   *
*****




#include <iostream>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    for (int i = 1 ; i <= row ; i++){
        for (int j = 1 ; j <= col ; j++){
            if (i == 1 || i == row || j == 1 || j == col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

*/


// Below example is the inverted half pyramid

/*

****
***
**
*




#include <iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    for (int i = n ; i>=1; i++){
        for (int j = 1 ; j <= i  ; j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

*/



// Below exampke is the half pyramid after 180 degree roation 

/*
   *
  **
 ***
****




#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i = n ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            if (j <= n -1){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }

        cout<<endl;
    }

    return 0;
}

*/





// half pyramid using numbers 

/*

1
22
333
4444
55555




#include <iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i = 1 ; i<= n; i++){
        for(int j = 1 ; j<= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

*/



//  floyd's triangle 

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 




#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int counter = 1;
    for(int i = 1 ; i<=n ; i++){
        for (int j = 1 ; j <= i; j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }

    return 0;
}


*/



// This is butter fly apttern 

/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *




#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1 ; i<= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1 ; j <= space ; j++ ){
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1 ; j <= space ; j++ ){
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}


*/