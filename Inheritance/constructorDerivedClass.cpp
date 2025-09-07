// we can use constructors in derived classes in C++
// if base class constructor does nto ahve any arguments there is no need of any constructor in derived class
// if there are one or mre arguments in the base class constructor, derived class need to pass arguments tp tje nase class  constructor
// if both base and derived classes have constructors, base class constructor is executed first

// CONSTRUCTORS IN MULTIPLE INHERITANCE
// in multiple inheritance base classes are constructed in the order in which they appear in the class declaration

// CONSTRUCTORS IN MULTILEVEL INHERITANCE
// in multilevel inheritacen the constructors are execueted in the order of inheritance

// SPECIAL SYNTAX
// Derived=Constructor (arg1, arg2, arg3, ....) : Base1-Constructor(arg1, arg2), Base2-Constructor (arg3, arg4){}

// Special Case Of Viirtual Base Class
// the construcotrs for virtual base classes are invoked before any nonvirtual base class
// if there are multiple virtual base classes, they are invoked in the order declared

/*
class B : public A{
    first A() constructor is executed since base class gets the priority
};


class A : public B, public C{
    first B() then C() then A() since order of declaration decided which one is used first in case of multiple inheritance
};

class: public B, virtual public C{
    first virtual C(), then B() then A()
};
*/

#include <bits/stdc++.h>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called" << endl;
    }

    void printDataBase1()
    {
        cout << "the value of data is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called" << endl;
    }

    void printDataBase2()
    {
        cout << "the value of data is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2{ //here the order of the constructors calling is decided
    int derived1, derived2;

    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){ //this constructr will take 4 arguments
        derived1=c;
        derived2=d;
        cout<<"derived class constructor is called"<<endl;
    }

    void printDataDerived(){
        cout<<"derived1 : "<<derived1<<endl;
        cout << "derived2 : " << derived2 << endl;
    }
};


int main()
{
    Derived prem(1,2,3,4);
    prem.printDataBase1();
    prem.printDataBase2();
    prem.printDataDerived();
    return 0;
}
// by ad73prem
