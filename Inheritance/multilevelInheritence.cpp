#include<bits/stdc++.h>
using namespace std;

/*
1. if we are inheriting B from A and C from B : A--->B---->C   
        a. A is the base class of B and B is the base class for C
        b. ABC is claled the Inheritance Path.
*/

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};
void Student :: set_roll_number(int r){
    roll_number=r;
}

void Student :: get_roll_number(){
    cout<<"the roll number is : "<<roll_number<<endl;
}


class Exam : public Student{
    protected:
        float maths;
        float phy;
    public:
        void set_marks(float , float);
        void get_marks();
};

void Exam :: set_marks(float a, float b){
    maths=a;
    phy=b;
}
void Exam :: get_marks(){
    cout<<"maths  : "<<maths<<endl;
    cout<<"physics : "<<phy<<endl;
}

class result : public Exam{
    float percentage;

    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"final marks : "<<(maths+phy)/2<<endl;
        }
};


int main() {
    result prem;
    prem.set_roll_number(73);
    prem.set_marks(50, 78.2);
    prem.display();
    return 0;
}
//by ad73prem