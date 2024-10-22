/*
@@@@ Code 1 : Here we are doing the sum of 1 to n numbers the formula we have used here sum = n(n+1)/2

// Sum of N Natural Number 

#include <iostrea>
#include <bits/stdc++.h>

int sum(int n){
    int return1;
    return1 = (n * (n+1))/2;
    return return1; 
}

int32_t main(){
    int num;
    cin>>num;

    cout<<sum(num)<<endl;

    return 0;
}

*/

/*
@@@@ Code 2 : Check The pythogran triplet



#include <iostream>
#include <math.h>
using namespace std;

bool pyth(int x , int y , int z){
    int a = max(x,max(y,z));
    int b,c;

    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y; 
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}



int main(){

    int a,b,c;
    cin>>a>>b>>c;

    cout<<endl;

    if(pyth(a,b,c)){
        cout<<"Pythogran Triplet"<<endl;
    }
    else{
        cout<<"Not There"<<endl;
    }

    return 0;
}


*/

/*

@@@@ Code 3 :  


*/


#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 0 ; i<n ; i++){
        cin>>array[i];
    }

    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(minNo > array[i]){
            minNo = array[i];
        }
        if(maxNo < array[i]){
            maxNo = array[i];
        }
        else{
            cout<<"All Numbers are Same";
            break;
        }

    }
    cout<<endl;
    cout<<" "<<maxNo<<" "<<minNo;    

    return 0;
}