#include <bits/stdc++.h>
using namespace std;

/*

SYNTAX FOR MULTIPLE INHERITANCE

class Deirved: visibility-mode Base1, visibility-mode Base2{
    //code for the class
}
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2{
    public:    
        void show(){
            cout<<"the values are "<<base1int<<"and"<<base2int<<endl;
        }
}; 

int main()
{
    Derived prem;
    prem.set_base1int(1);
    prem.set_base2int(34);
    prem.show();
    return 0;
}
// by ad73prem