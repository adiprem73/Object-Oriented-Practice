#include<bits/stdc++.h>
using namespace std;

// Pointers to derived class
class BaseClass{
    public:
    int var;
    void display(){
        cout<<"displaying variable o fbase class : "<<var<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"displaying variable of base class : "<<var<<endl;
        cout<<"displaying variable of derived class : "<<var_derived<<endl;
    }
};

int main() {
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; //base class's poiinter can point to a derived class object. but if we call any function like display() of suich a pointer it willcall base class function nly. this is claled 📍📌LATE BINDING

    base_class_pointer->var= 34;
    // base_class_pointer->var_derived= 67; //📌we cannpt access a derived class object with a base class pointer
    base_class_pointer->display();

    DerivedClass* derived_class_pointer;
    derived_class_pointer= &obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->display();
    return 0;
}
//by ad73prem