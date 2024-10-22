#include<iostream>
using namespace std;

class Shop{
    int itemID[100];
    int itemPrice[100];
    int counter;


    public:
        void initcounter(void){counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"Enter a ID of an item"<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter a price for item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void){
    for(int i = 0 ; i < counter ; i++){
        cout<<"The ID of item "<<itemID[i]<<" and price is "<<itemPrice[i]<<endl;
    }
}


int main(){
    Shop dukhan;
    dukhan.initcounter();
    dukhan.setPrice();
    dukhan.setPrice();
    dukhan.setPrice();
    dukhan.displayPrice();

    return 0;
}