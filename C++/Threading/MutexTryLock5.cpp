// try_lock() is the function that locks the race condtion if the vereything runs properly then it retur true or else false

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
std::mutex m1;

void count_100000(){
    for(int i = 0 ; i <= 1000000 ; ++i){
            if(m1.try_lock()){
                ++counter;
                m1.unlock();
            }
    }
}

int main(){
    std::thread t1(count_100000);
    std::thread t2(count_100000);

    t1.join();
    t2.join();

    cout<<"Counter could increase upto : " << counter <<endl;
    return 0;
}



/* 
If you apply the try_lock() then it takes n no of mutex and run the t1 and t2 thraed with no fix value runnig 
/ if we apply the lock() function then it will run upto 2000000


*/