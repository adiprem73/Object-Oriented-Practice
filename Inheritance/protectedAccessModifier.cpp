#include<bits/stdc++.h>
using namespace std;

class Base{
    protected: //its just like private but it can be inherited
    int a;

    private:
    int b;
};
/*
//for a protected member:
                        Public derivation       Private derivation          Protected derivation
    1. Private          not inherited           not inherited               not inherited
    2. Protected        protected               private                     protected
    3. Public           public                  private                     protected

*/
class Derived : protected Base{

};

int main() {
    Base b;
    Derived d;
    cout<<d.a; //this wont work since a is protected and hence only the class members can access it just like any private member
    return 0;
}
//by ad73prem