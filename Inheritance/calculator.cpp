#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator{
    protected:
        int num1;
        int num2;
    public:
        void inputNumbers(){
            cout<<"enter two numbers : "<<endl;
            cin>>num1>>num2;
        }

        void process(){
            cout<<"Additon : "<<num1+num2<<endl;
            cout<<"Subtraction : "<<num1-num2<<endl;
            cout<<"Mutliplication : "<<num1*num2<<endl;
            cout<<"division : "<<num1/num2<<endl;
        }
};

class ScientificCalculator{
    protected: 
        int num1;
        int num2;
        int choice; //1 or 2 or 3 or 4 denoting the choice of add, sub mult or div

    public:
        void inputNumberss()
        {
            cout << "enter two numbers : " << endl;
            cin >> num1 >> num2;
        }

        void takeChoice()
        {
            cout<<"enter ur choice from 1 to 4 : "<<endl;
            cin>>choice;
        }

        void getanswer(){
            switch (choice)
            {
            case 1:
                cout << "Additon : " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Subtraction : " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Multiplication : " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Division : " << num1 / num2 << endl;
                break;

            default:
                cout<<"kindly, enter a valid option"<<endl;
                break;
            }
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{

};

int main() {
    HybridCalculator num;
    num.inputNumberss();
    num.takeChoice();
    num.getanswer();
    return 0;
}
//by ad73prem