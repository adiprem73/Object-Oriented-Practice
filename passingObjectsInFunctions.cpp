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
    int a;
    int b;

    public:
    void setData(int v1, int v2){
        a=v1;
        b=v2;
    }

    void setDataBySum(Complex o1, Complex o2){
        a= o1.a + o2.a;
        b= o1.b+ o2.b;
    }

    void printComplex(){
        cout<<"your complex number is : ";
        cout<<a<<" + i "<<b<<endl;
    }
};

int main() {
    FAST_IO;
    Complex c1, c2, c3;
    c1.setData(1,2);
    c1.printComplex();
    c2.setData(9,2);
    c2.printComplex();
    c3.setDataBySum(c1, c2);
    c3.printComplex();

    return 0;
}
//by ad73prem