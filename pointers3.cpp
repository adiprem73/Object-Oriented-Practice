#include<bits/stdc++.h>
using namespace std;

class Shop{
    int id;
    float price;
    
    public:
        void setData(int a, float b){
            id=a;
            price=b;
        }

        void getData(){
            cout<<"the id of the item is : "<<id<<endl;
            cout<<"the price of the item is : "<<price<<endl;
        }
};

int main() {
    Shop *ptr= new Shop [3]; //array of 2 objects of the shop class are being made here
    // pointer ptr points tot he first object of that array

    //shops item are: general store item, veggies sotre item, hardware store item

    Shop* tempptr = ptr;
    int p,q;
    for(int i=0;i<3;i++){
        cout << " Enter Id and price of item : " << i + 1 << endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        // ptr->getData();
        ptr++;
    }

    for(int i=0;i<3;i++){
        cout<<"item number : "<<i+1<<endl;
        tempptr->getData();
        tempptr++;
    }
    return 0;
}
//by ad73prem