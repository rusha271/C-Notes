// What do you understand the thread and give me one example ?

/*
0. In Every appliaction there are is default thread called main() 
1. A thread in programming is the smallest unit of a process that can be scheduled and executed by the operating system. 
   Threads are used to perform multiple tasks concurrently within the same program, enabling efficient use of CPU resources.

    Ways to create the thread :
    a. Function to pointer
    b. Lambda Function
    c. Functors
    d. Members Function
    e. Static Member Function





*/



#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;
typedef unsigned long long uul;

uul OddSum = 0;
uul EvenSum = 0;

void findEven(uul start, uul end) {
    uul sum = 0;
    for (uul i = start; i <= end; ++i) {
        if ((i & 1) == 0) {
            sum++;
        }
    }
    EvenSum = sum;
}

void findOdd(uul start, uul end) {
    uul sum = 0;
    for (uul i = start; i <= end; ++i) {
        if ((i & 1) == 1) {
            sum++;
        }
    }
    OddSum = sum;
}

int main() {
    uul start = 0, end = 9000000000;
    auto startTime = high_resolution_clock::now();

    thread t1(findEven, start, end);
    thread t2(findOdd, start, end);

    t1.join();
    t2.join();

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "Even no : " << EvenSum << endl;
    cout << "Odd no : " << OddSum << endl;
    cout << "Sec : " << duration.count() / 1000000.0 << endl;

    return 0;
}   