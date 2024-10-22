// Bubble sort 

/*

void bubbleSort(int arr[], int n) {
    // Outer loop for traversing the entire array n-1 times
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}


*/



//Selection sort : 


/*

void selectionSort(int arr[], int n) {
    // Traverse the entire array
    for (int i = 0; i < n - 1; i++) {
        // Assume the current position as the minimum
        int min_idx = i;
        // Find the minimum element in the unsorted portion of the array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted portion
        std::swap(arr[min_idx], arr[i]);
    }
}

*/

/*

void insertionSort(int arr[], int n) {
    // Traverse from the second element to the end of the array
    for (int i = 1; i < n; i++) {
        // Store the current element as key
        int key = arr[i];
        // Initialize j to the previous index
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the key in the correct position
        arr[j + 1] = key;
    }
}




*/


// merge sort : divide and conquere 

/*

First step : 



#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& array , int low , int high , int mid){
    vector<int> temp;

    int left = low;
    int right = mid+1;

    // first case
    while(left<=mid && right<=high){
        if(temp[left]<temp[right]){
            temp.push_back(temp[left]);
        }
        else{
            temp.push_back(temp[right]);
        }
    }

    //second case 
    while(left<=mid){
        temp.push_back(temp[left]);
    }
    while(right<=high){
        temp.push_back(temp[right]);
    }

    for(int i = low ; i <= high ; i++){
        array[i] = temp[i-low];
    }


}

void mergeSort(int array[] , int low , int high){
    if(low == high){
        return 0;
    }
    int mid = (low+high)/2;
    int left = low;
    int right = mid+1;

    mergeSort(array,low,mid);
    mergeSort(array,mid+1,high);
    merge()


}


*/