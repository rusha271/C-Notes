/*
@@@@@ Code 1 :  

In the array we find the maximum number at which postion

The code aims to solve a "running maximum" problem, 
where it updates and prints the maximum value encountered so far at each step while iterating through the array.



#include <iostream>
using namespace std;

int main(){
    int mx = -199999999999;
    int n;
    cout<<"Enter number for array : "
    cin>>n;

    int array[n];

    for(int i = 0 ; i<n ; i++){
        cin>>array[i];
    }

    for(int i = 0 ; i<n; i++){
        mx = max(mx,array[i]);
        cout<<mx<<endl;
    }

    return 0;
}

*/


/*

Subarray : A contiguous segment of elements within an array.
1 0 9 2 8 7

so sub array can be -> 0 9 2 


Subsequence: A sequence derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
1 2 3 4 5 6 7

so sebsequence can be any thing -> 2 5 7 or  3 5 6 


*/

/*
@@@@@ Code 2 :

Sum of Sub array : Means array 1 2 2

1 , 1 2 , 1 2 2 , 2 , 2 2 , 2



#include <iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int array[n];
    for(int i = 0 ; i<n ; i++){
        cin>>array[i]
    }

    int curr = 0;
    for(int i = 0;i<n;i++){
        for(int j = 1 ; j <n ; j++){
            curr = curr + array[j];
            cout<<curr<<" ";
        }
    }

    return 0;
}

*/

/*
@@@@@ Code 3 :

Subarray Problem : In this if array is given and we have to find subarray that conatain the diffrence is same 

Ex : 1 4 5 7 9 11 13 17 18

so longest subarray : 5 7 9 11 13

approach :

    loop over the array and find the answer 

maintain the varaible :
    pervious diffrence (pd)
    current common diffrence (curr)
    maxmium length of subarray(max)

It has two cases : 
    case 1 : pd == a[i] - a[i-1]
             * current ans will be update by 1
             * ans = max(ans,curr)

    Case 2 : pd != a[i] - a[i-1]
            * update the current ans by 2




#include <iostream>
using namespace std;

int main() {
    int n;

    // Asking the user for the number of elements in the array
    cout << "Number of elements in array: ";
    cin >> n;
    int array[n];

    // Inputting the elements of the array from the user
    cout << "Array List input: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Initialize the longest arithmetic subarray length as 2
    int ans = 2;
    // Compute the initial previous difference (pd) between the first two elements
    int pd = array[0] - array[1];
    // Index for iteration starting from the third element
    int j = 2;
    // Current length of the arithmetic subarray being checked
    int curr = 2;

    // Iterate through the array starting from the third element
    while(j < n) {
        // If the current difference matches the previous difference
        if(pd == array[j] - array[j-1]) {
            // Increment the current length of the arithmetic subarray
            curr++;
        } else {
            // Reset current length to 2 as the difference has changed
            curr = 2;
        }
        // Update the longest arithmetic subarray length found so far
        ans = max(ans, curr);
        // Update the previous difference
        pd = array[j] - array[j-1];
        // Move to the next element
        j++;
    }

    // Output the length of the longest arithmetic subarray
    cout << ans << endl;
    return 0;
}


*/

/*
@@@@@ Code 4 :

Isyana is given the number of vistior at her local theme park on N consective days.The
number of vistiors on the ith day is Vi . A day is "record breaking" if it satisfies both of the 
following contions : 
    * The number of visitors on the day is strickly larger than the number of visitors on the each
      percious days. 
    * Either it is last day, or the numebr of visitors on the day is strictly larger than the 
      number of visitors on the following day.

Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of Array : ";
    cin>>n;
    int array[n];

    cout<<"Array : ";
    for(int i = 0 ; i<n , i++){
        cin>>array[n];
    }
    

    return 0;
}
*/