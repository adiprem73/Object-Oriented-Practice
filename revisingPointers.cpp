#include<bits/stdc++.h>
using namespace std;

int main() {
    // basic example
    int a =4;
    int *ptr= &a;
    cout<<*ptr<<endl; // (DEREFERENCE) this is the reference of ptr pritning means the value of ptr


    // new operator
    int *p= new int(40);
    cout<< "the vlaue at address p is  "<<*p<<endl;

    int * arr= new int[3]; //array creation
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;


    // delete operator

    int *arr1 = new int[3]; // array creation : the name of the array is a pointer pointing to the first element of the array
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    delete [] arr1;
    for (int i = 0; i < 3; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;


}
//by ad73prem