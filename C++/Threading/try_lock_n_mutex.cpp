/*
We here useing std::try_lock(m1,m2,m3,.....mn);
    working is that it try to pass the lockable object one by one in try_lock() functiom
    Syntax -> std::thread try_lock(m1,m2,m3);

0. On success of function then it will return -1 otherwise 0 based on mutex index number 
1. If fail then it will release the mutex all the before the mutex
2. 

*/

#include <iostream>
#include <thread>
#include <chrono>

