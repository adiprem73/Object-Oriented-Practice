#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define vprint(v)            \
    for (auto &elem : v)     \
        cout << elem << " "; \
    cout << endl;
#define mprint(m)                                       \
    for (auto it : m)                                   \
        cout << it.first << " : " << it.second << endl; \
    cout << endl;
#define vint vector<int>
#define vstring vector<string>
#define vmat vector<vector<int>>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>

const int INF = 1e9;
const ll MOD = 1e9 + 7;

//Forward declaration
class Complex; // this makes the compiler assured that complex function class is ahead in the program

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex o1, Complex o2); //since we havent defines complex members class suntillnow what we can do is make the declaration here and define them after complex has been properly intilsed
    int sumCompComplex(Complex o1, Complex o2);
    
};

class Complex
{
    int a, b;

    //1️⃣CLASS FRIEND DECLARATION
    friend class Calculator;

    //2️⃣INDIVIDUALLY DECLARATION OF FUCNTIONS AS FRIENDS
    friend int Calculator::sumRealComplex(Complex o1, Complex o2); //but this way wwe ould nee dto declare friend class for eahc and  eveyr function prese.t to tachkle this, we cna make clsses friends of each other
    friend int Calculator::sumCompComplex(Complex o1, Complex o2);


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is : " << a << " + " << b << "i" << endl;
    }
};

int Calculator:: sumRealComplex(Complex o1, Complex o2){
    return o1.a+o2.a;
}

int Calculator:: sumCompComplex(Complex o1, Complex o2){
    return o1.b+o2.b;
}




int main()
{
    FAST_IO;
    Complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout<<res;
    return 0;
}
// by ad73prem