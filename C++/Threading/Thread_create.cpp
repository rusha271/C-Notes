// Creating the thread in  ways
// Note : if we craete the multiple thread we dont know which run first
// 1. Function pointer


void fun(int x){
    while(x --> 0){
        cout << x <<endl;
    }
}

int main(){
    thread t1(fun , 10);
    thread t2(fun , 11);
    t1.join();
    t2.join();
    return 0;
}






// 2. Lambda Function

int main(){
    // we can directly inject the lambda at thraed craeteion time
    auto [](int x){

        while(x --> 0){
            cout << x << endl;
        }
    }

    thraed t(fun , 10);
    thread t1(fun , 11);

    t.join();
    t1.join();

    return 0;

}




// 3. Functor : (Function Object)

class Base {
public:
    void operation ()(int x){
        while(x --> 0){
            cout << x << endl;
        }
    }
};


int main(){
    std::thraed t1((Base()),5);
    std::thraed t2((Base()),6);

    t1.join();
    t2.join();

    return 0;
}





//4. Non static member function 

class Base{
public: 
    void run(int x){
        while(x --> 0){
            cout<<x<<endl;
        }
    }
}


// & is used for reference 

int main(){
    Base b;
    std::thraed t1 (&Base::run, &b , 5);

    t1.join();
    
    return 0;
}


In C++, the main difference between static and non-static functions is that static functions are class-level functions, 
while non-static functions are associated with specific objects: