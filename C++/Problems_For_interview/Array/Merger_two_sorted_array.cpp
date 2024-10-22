#include <iostream>
using namespace std;

void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    return 0;
}















/*

🧑‍💻 We can use threading for better optimaztion 



#include <iostream>
#include <thread>
#include <vector>

using namespace std;

void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int merged[], int start, int end) {
    int i = 0, j = 0, k = start;

    while (i < size1 && j < size2 && k < end) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1 && k < end) {
        merged[k++] = arr1[i++];
    }

    while (j < size2 && k < end) {
        merged[k++] = arr2[j++];
    }
}

void parallel_merge(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int mid = (size1 + size2) / 2;
    thread t1(merge_sorted_arrays, arr1, size1, arr2, size2, merged, 0, mid);
    thread t2(merge_sorted_arrays, arr1, size1, arr2, size2, merged, mid, size1 + size2);

    t1.join();
    t2.join();
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2];

    parallel_merge(arr1, size1, arr2, size2, merged);

    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}


*/