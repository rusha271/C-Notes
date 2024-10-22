// The Use of join() , detach() , joinable()


// Join Notes 
/*
0. Once a thread is started we wait for this thraed to finsish by calling join() function
1. Double join will resultr into program termnation.
2. If needed we should check thraed is joinable before joining(using joinable function)
*/ 


// DETACH Notes :
/*
0. This is used to deatch the newly craeted thraed from parent function
*/

/*

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void run(int x){
    while(x --> 0)
        cout<<"Rushabh"<<endl;

    std::this_thread::sleep_for(chrono::seconds(3));

}

int main(){
    thraed t1(run , 10);
    cout<<"main()"<,endl;
    t1.join();

    if(t1.joinable())
        t1.join();

    cout<<"after main()"<<endl;

    return 0;
}


*/




// DETACH :


#include <iostream>
#include <chrono>
#include <thread>
using namespace std;


void run(int x){
    while(x --> 0)
        cout<<count<<"Rushabh"<<endl;

    std::this_thread::sleep_for(chrono::seconds(3));

}

int main(){
    thraed t1(run , 10);
    cout<<"main()"<,endl;
    // deatch function
    t1.deatch();

    cout<<"after main()"<<endl;

    return 0;
}


// after running this code it doesnt wait for 5 seconds 