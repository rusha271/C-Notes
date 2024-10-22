/*
Linear serach maens it will check one by one item in array if value matches then it will break the loop

array = {12,18,20,42,8,10}
key = 8



#include <iostream>
using namespace std;

int main(){

    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the key to find: ";
    cin >> key;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            cout << "Key found at position: " << i+1 << endl;
            found = true;
            break;  // Exit the loop once the key is found
        }
    }

    if (!found) {
        cout << "Key not found" << endl;
    }

    return 0;
}


*/

/*


Linear Serach using functions 


#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            return i + 1;  
        }
    }
    return -1;  
}

int main() {
    int n, key;
    cout << "No of elements: ";
    cin >> n;
    cout << "Key: ";
    cin >> key;

    int array[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int position = linearSearch(array, n, key);
    if (position != -1) {
        cout << "Key found at position: " << position << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}

*/


/*

Binary search is an efficient algorithm for finding a target value within a sorted array by repeatedly dividing the search interval in half.


Rule to apply binary search : the array list must be sorted then it should be there

Here how it apply we find the middle value if the middle value is less than given value then we apply search the right side otherwise left side 

key 27 
array = {8,10,12,21,27,30,42}


*/

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1; // Adjust end to the last valid index

    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            return mid+1; // Return index if key found
        } else if (arr[mid] > key) {
            end = mid - 1; // Adjust end if key is smaller
        } else {
            start = mid + 1; // Adjust start if key is larger
        }
    }

    return -1; // Return -1 if key is not found
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int array[n]; // Declare array with size n

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int result = BinarySearch(array, n, key);

    if (result != -1) {
        cout << "Key found at index: " << result << endl;
    } else {
        cout << "Key not found." << endl;
    }

    return 0;
}
