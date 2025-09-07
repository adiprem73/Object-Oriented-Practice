#include <bits/stdc++.h>
using namespace std;

/*
INHERITANCE IN C++
1. reusability is a very important feature in OOPs.
2. the concept of resuability in cpp is supported using inheritance
3. Base Class: the existing class is called base class
4. Derived Class: the new class which is inherited is called as derived class
5. forms of inheritance in cpp
        😉single inheritance : a derived class with only one base class   A---->B    A derives B
        😉multiple inheritance : a derived class with more than one Base class    A---->c    B---->C    A and B deribes C
        😉Heirarchical Inheritance: several derived classes from a single base class    A---->B    A------>C    A derives both B and C
        😉Multilevel Inheritance: deriving a class from already deriuved class    A---->B----->C
        😉Hybrid Inheritance : combination of multiplle inheritance and multilevel inhertiance



*/
// BASE CLASS
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee() {} //base class must have a default constructor since the derived class calls for the base class constructor only
};
/*
//DERIVED CLASS SYNTAX
class {{derived-class-name}} : {{visibility-mode-PublicOrPrivate}} {{base-class-name}}{
   members/methods/etc....
}
*/

// VISIBILITY MODE: By default private : pbase class ke public members will be private members of the derived class
// public: base class ke members will be public members of the derived class
// the private members of the base class cannot be inherited

// Creatinf derived class
class Programmer : public Employee
{
public:
    int langCode = 9;

    Programmer(int inpid)
    {
        id = inpid;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl
         << rohan.salary << endl;
    Programmer prem(1);
    cout << prem.id << endl;
    prem.getData();
    return 0;
}
// by ad73prem