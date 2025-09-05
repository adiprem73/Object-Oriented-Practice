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

// Destrcutors
// never takes an argument nor does it return any value
// here what we are doing is experimenting wiht the auto calling feature of the destructors/ since we create a block and describe n2 and n3 under it, when exiting the bloick the compliler automatically destructs n2 and n3 while n1 is still there since its scope isnt yet over
int cnt=0;

class num{
    public:
        num(){
            cnt++;
            cout<<"This is the time when constructor is called for object number : "<<cnt<<endl;
        }

        ~num(){  //destrcutor
            cout<<"this is the time when destrucotr is called for object number : "<<cnt<<endl;
            cnt--;
        }
};



int main() {
    FAST_IO;
    cout<<"We are inside the main function"<<endl;
    num n1;
    cout << "Creating two objects" << endl;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects "<<endl;
        num n2, n3;
        cout<<"exiting the block";
    }
    cout<<"back to main"<<endl;
    return 0;
}
//by ad73prem