#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){ //here if we keep the arguement as the same name as the name of the objkect parameter than although we wont be getting any errors but we will get a garbae value in the final output
        //The reason is if tow variable are given the same naem then the priortiy is given ot the more local variable so here both the a(s) are the a argument passed. henfce we use this-> keyowrd
            this->a=a;
        }

        void getData(){
            cout<<"the value of a is : "<<a<<endl;
        }
};


//this is a keyword which is a pointer to the object which invoked the member function
//arrow operator is always used with pointers. 

int main() {
    A obj;
    obj.setData(4);
    obj.getData();
    return 0;
}
//by ad73prem