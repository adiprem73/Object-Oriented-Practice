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

class c2;

class c1{
    int val;
    public:    
        void indata(int a){
            val=a;
        }
        void display(){
            cout<<"value of "<<val<<endl;
        }
    
    friend void exchange(c1&, c2&);
};

class c2{
    int val2;
    public:    
        void indata(int a){
            val2=a;
        }
        void display(){
            cout<<"value of "<<val2<<endl;
        }
    friend void exchange(c1&, c2&);
};

void exchange(c1& x, c2& y){ //call by reference: if call by reference wont be there then valyes wont be swapped. means the members will be copied and then passed into the function
    int temp=x.val;
    x.val= y.val2;
    y.val2= temp;

}

int main() {
    FAST_IO;
    c1 n1;
    c2 n2;
    n1.indata(2);
    n2.indata(4);
    exchange(n1, n2);
    n1.display();
    n2.display();
    return 0;
}
//by ad73prem