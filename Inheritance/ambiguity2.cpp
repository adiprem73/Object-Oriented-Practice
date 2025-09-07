#include<bits/stdc++.h>
using namespace std;

class B{
    public :
    void say(){
        cout<<"Hello world"<<endl;
    }
};


class D : public B{
    public: 
    //this new function overwrites the functiono fthe same naem fromt eh base calss
    void say(){
        cout<<"namaste duniya"<<endl;
    }
};

//here both the derived class and the base class has the same name functions and hence this creates and ambiguity as to which one to call. 

//the compiler always favours the Derived class

int main() {
    
    return 0;
}
//by ad73prem