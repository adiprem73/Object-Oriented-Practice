#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define vprint(v) for (auto& elem : v) cout << elem << " "; cout << endl;
#define mprint(m) for (auto it:m) cout<<it.first<<" : "<<it.second<<endl; cout<<endl;
#define vint vector<int>
#define vstring vector<string>
#define vmat vector<vector<int>>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>

const int INF = 1e9;
const ll MOD = 1e9+7;
// till now we used to make another function in order to set the data of objects
//constructors will allow us to set the data at the time of initilization of the object only
// we write int sum=6, and data 6 is store in sum variable right??... likewise classes are kind of custom datatypes only and hence we want somethign like this of a functionality



class Complex{
    //Creating a Constructor
    int a,b;

    public:
    //Constructor is a speaical member function with same name as of the class. it is  use dto initialize the objects of its class. Constrcutor invoked(calls, execute) automatically whenever we create an object. it is must that we keep the name of the constructor as the name of the class

    Complex();// constructor declaration

    void printData(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }

};

//if we do not put a constructor nor we set any data by ourself into the variables then we will recieve a garbage value
Complex :: Complex(){ //this si a DEFAULT CONSTRUCTOR as it takes no parameters
    a=100;
    b=0;
}

int main() {
    FAST_IO;
    //calling a constructor
    Complex c;
    c.printData();
    return 0;
}
//by ad73prem

/*
//PROPERTIES of CONSTRUCTORS

1. it hsould be declared in the public section of the class
2. they are automatically invoked whenever the object is created
3. They cannot return values and do not have return types 
4. it can have default arguements
5. we cannot refer to their address

*/