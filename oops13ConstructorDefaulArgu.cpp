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

class Simple{
    int data1;
    int data2;
    public: 
        Simple(int a, int b=9){
            data1=a;
            data2=b;
        }

        void printData(){
            cout<<data1<<" "<<data2<<endl;
        }
};

int main() {
    FAST_IO;
    Simple s(1);
    s.printData();
    return 0;
}

//bascialy setting a default value works as a failSafe. it s aflal back data. if not other dtaa is passed to it then the default value is set to that object.
//by ad73prem