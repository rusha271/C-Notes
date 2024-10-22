#include<iostream>
using namespace std;

void Reversearray(int array[] , int len){
    for(int i = 0; i < len/2; i++){
        std::swap(array[i], array[len-i-1]);
    }
}

int main() {
    int n;
    cout << "Enter size of array " << endl;
    cin >> n;

    int array[n];  

    cout << "Enter elements of array" << endl;
    for(int i = 0; i < n; i++){
        cin >> array[i];  
    }

    Reversearray(array, n);  
    cout << "Reversed array:" << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";  
    }

    return 0;
}
