#include<bits/stdc++.h>
using namespace std;

//SINGLE INHERITANCE

class Base{
    int data1; //private by default: not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base:: setData(){
    data1=10;
    data2=20;
}

int Base:: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : private Base{ //class is being drived publically
    int data3;
    public: 
        void process();
        void display();
};

void Derived::process()
{
        setData();
        data3 = data2 * getData1();
}
void Derived::display()
{
    cout<<"value of data1 : "<<getData1()<<endl; //since data1 was prvate opf the base class it cannot be derived hence we use the public function getData1() to access the data1
    cout<<"value of data2 : "<<data2<<endl; //data2 and data3 are accessible since they are public and of the derived class as well

    cout << "value of data3 : " << data3 << endl;
}

int main() {
    Derived der;

    der.process();
    der.display();
    return 0;
}
//by ad73prem