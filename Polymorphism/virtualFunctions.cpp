#include<bits/stdc++.h>
using namespace std;


//int pointers to derived class we saw that if we maek a bae class pointer point to an derived class and then call function of same name then onlyy the base class fucntion was being called.

// but if we make a virtual function then the derived class function will be called in such a case

class BaseClass
{
public:
    int var;
    virtual void display() // we made this virtual function since this way even we call the same name function it will still call the derived class function. hence we use this virtual function tochange the default behaviour
    {
        cout << "displaying variable o fbase class : " << var << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying variable of base class : " << var << endl;
        cout << "displaying variable of derived class : " << var_derived << endl;
    }
};

int main() {
    BaseClass* base_class_pointer;
    DerivedClass obj_derived;
    base_class_pointer= & obj_derived;
    base_class_pointer->display(); //this will call the base class function by default. to change this default behaviour we use virtual function
    return 0;
}
//by ad73prem