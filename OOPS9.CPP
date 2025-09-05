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
//Forward Declaraiton
class y;
class x{
    int data;
    public:
        void setData(int value){
            data=value; 
        }
    friend void add(x, y);
};

class y{
    int num;
    public:
        void setData(int value){
            num=value;
        }
    friend void add(x, y);
};

void add(x o1, y o2){
    cout<<"adding datas of X and Y obj gives : "<<o1.data+o2.num;
}

int main() {
    FAST_IO;
    x a;
    y b;
    a.setData(3);
    b.setData(5);
    add(a,b);
    return 0;
}
//by ad73prem