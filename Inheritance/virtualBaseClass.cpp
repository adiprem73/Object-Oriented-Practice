#include<bits/stdc++.h>
using namespace std;

// Suppose there is Class A Now there are two classes B and C that gets derived from the base class. Now there is another Class D that gets derived from Class B and Class C as well so there is a multiple inheritance here where Class B and Class C both derived class D.  Now if there is a variable in Class A which is passed on to be inherited by Class B and Class C as well this variable will go on to the inherited by class D also now since there are two variables coming 1 from coming Class B and 1 from coming class C there is an ambiguity about which variable to take hence we make class A virtual base classes Due to this They always check whether only one variable is being passed on to the derived class

// class B : virtual public A{}
// class C : virtual Public A{}
// 


/*
student--->test
student--->sprots
test--->result
sports-->result

*/

class Student{
    protected:
    int roll_no;

    public:
    void set_number(int a){
        roll_no=a;
    }

    void print_number(){
        cout<<"Roll Number : "<<roll_no<<endl;
    }
};

class Test : virtual public Student{
    protected:
    float maths, physics;

    public:
    void set_marks(float m1, float m2){
        maths=m1;
        physics=m2;
    }

    void print_marks(){
        cout<<"result is here : "<<endl
            <<"maths : "<<maths<<endl
            <<"physics : "<<physics<<endl;
    }
};


class Sports: virtual public Student{
    protected:
    float score;

    public:
    void set_score(float sc){
        score=sc;
    }

    void print_score(){
        cout<<"your PT score is : "<<score<<endl;
    }
};

//now since roll_no is with class Student it will be tow instance in both classes test and sports. but since we wrote virtual therefore only one instace will be calles

class Result: public Test, public Sports{
    private:
    float total;

    public:
    void display(){
        total = maths+physics+score;

        print_number();
        print_score();
        print_marks();
        cout<<"your total score is : "<<total<<endl;
    }
};
 


int main() {
    Result prem;
    prem.set_marks(78,56);
    prem.set_number(73);
    prem.set_score(66);
    prem.display();
    return 0;
}
//by ad73prem