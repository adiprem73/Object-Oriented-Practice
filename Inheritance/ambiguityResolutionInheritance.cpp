#include<bits/stdc++.h>
using namespace std;

//what if the two base functions have a commmon function name which is derived in the derived function. now this create ambiguity

class Base1{
    public: 
        void greet(){
            cout<<"Hoe are you ? "<<endl;
        }
};

class Base2{
public:
    void greet()
    {
        cout << "Kaise ho bhai ? " << endl;
    }
};


class Derived : public Base1, public Base2{
    int a;

    public:
        void greet(){ //this is how ambiquity can be resolved. now everytime greet is called it will alsway call base1 greet
            Base1::greet();
        }
};

int main() {

    //Ambiguity 1
    Derived prem;
    prem.greet(); //this confusion is created since both the base classes has same name functions
    return 0;
}
//by ad73prem