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

class Complex{
    int a, b;

    public: 
        Complex(int , int);

        void printNumber(){
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex:: Complex(int x, int y){  //parametrized constructor : takes values and sets them into the object
    a=x;
    b=y;
}

int main() {
    FAST_IO;

    //IMPLICIT CALL

    Complex a(4,6);

    //Explicit Call
    Complex b= Complex(5,7);
    a.printNumber();
    b.printNumber();
    return 0;
}
//by ad73prem