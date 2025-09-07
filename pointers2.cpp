#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real, img;

    public:

    void setData(int a, int b){
        real=a;
        img=b;
    }
    void getData(){
        cout<<"the number is : "<<real<<" + i"<<img<<endl;
    }
};

int main() {
    // Complex c1;

    // Complex *ptr= &c1; //pointer pointing to the object


    //we can also make an object withthe help of pointers
    Complex *ptr= new Complex;

    //(*ptr).setData(1,54); is exactly the same as
    ptr->setData(4,5); //dereferences the pointer and then use that objects's function... ARROW FUNCTION
    (*ptr).getData();



    // ARRAY of OBJECTS

    Complex *ptr2= new Complex[4];  //we can access the ahead elements of the object array as well
    ptr2->setData(1,6);
    ptr2->getData();
    return 0;
}
//by ad73prem