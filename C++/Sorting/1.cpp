/*

Time Complexity : O(n*n)

selection sort takes minimum numbers 



#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter n no of array";
    cin>>n;

    int array1[n];

    for(int i = 0 ; i < n ; i++){
        cin>>array1[i];
    }


    for(int i = 0 ; i < n ; i++){
        int mini = i;
        for(int j = i+1 ; j < n ; j++){
            if(array1[j]<array1[mini]){
                mini = j;
            }
        }

        int temp = array1[mini];
        array1[mini] = array1[i];
        array1[i] = temp; 

    }

    for(int i = 0 ; i < n ; i++){
        cout<<array1[i]<<" ";
    }

    return 0;
}

*/


/*

// Buuble sort :

#include <bits/stdc++.h>
using namespace std;

void buuble_sort(int array[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }

}

int main(){
    int n;
    cout<<"Enter n no of array : ";
    cin>>n;

    int array[n];

    for(int i = 0 ; i < n ; i++){
        cin>>array[i];
    }

    buuble_sort(array,n);

    for(int i = 0 ; i < n ; i++){
        cout<<array[i]<<" ";
    }

    return 0;
} 

*/

