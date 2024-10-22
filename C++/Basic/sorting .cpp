/*
Sorting is technique that use sort the value based on the value oder means in ascending or descending 

Selection Sort : Find the minimum value in unsorted array and swap them at begining  


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i = 0 ; i<n;i++){
        cin>>array[i];
    }

    for(int i = 0 ; i<n-1;i++){
        for(int j = i+1 ; j < n ; j++ ){
            if(array[j]<array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for(int i = 0 ; i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}

*/



/*
Buuble sort is the sorting technique in which biggest element goes to back


#include <iostream>
using namespace std;

void bubble_sort(int array[], int n) {
    for(int i = 0; i < n-1; i++) {
        bool swap = false;
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = true;
            }
        }
        if(!swap) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bubble_sort(array, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}


*/


/*
Insertion sorting : insert from unsorted array to the correct postion in sorted array 

#include <iostream>
using namespace std;

void insert_sort(int array[] , int n){
    int array[n];
    for(int i = 1 ; i<n;i++){
        int temp = array[i];
        int j = i-1;
        while(j>=0 && array[j]>temp){
            array[j+1] = array[j];
            j--; 
        }
        array[j+1] = temp;
    }
}


int main(){
    int n;
    cout<<"Enter Number in array : ";
    cin>>n;
    int array[n];

    cout<<"Unsorted array : ";
    for(int i = 0 ; i<n ;i++){
        cin>>array[i];
    }

    cout<<"Sorted array : ";
    insert_sort(array,n);
    for(int i = 0 ; i<n;i++){
        cout<<aary[i];
    }

    return 0;
}

*/

