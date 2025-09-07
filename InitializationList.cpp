#include<bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in construcot:
constructor(argument-list) : initilization-sectin{
    assignment + other code;
}

*/

class Test{
    int a; int b;
    public:
    Test(int i, int j): a(i), b(j){
        //body of the constructor
    }
}

int main() {
    Test t(4,6);

    return 0;
}
//by ad73prem