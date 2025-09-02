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


class Employee{
    private:
        int a, b,c; //these are provate and hence they cannot be accessed by harry.a or harry.b or anything. they can only be accessed by the memebrs and fucntions of this class only

    public:
        int d,e;
        void setData(int a1,int b1, int c1);   //jsut declaration
        void getData(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        };
};


void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}


int main() {
    FAST_IO;
    Employee harry;
    harry.d=34;
    harry.e=56;
    harry.setData(1,2,3);
    harry.getData();
    return 0;
}
//by ad73prem