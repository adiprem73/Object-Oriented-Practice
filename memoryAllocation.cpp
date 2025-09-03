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

//C++ compiler is very snmart. classes dont take any memeory unless any object is created. things common between different objects are stored a single time only. hence cpp compiler is very smart

class Shop{
    //private by default
    int itemId[100]; 
    int itemPrice[100];
    int counter;

    public:
        void initCounter(){
            counter=0;
        }

        void getPrice();
        void displayPrice();
};

void Shop :: getPrice(){
    cout<<"Enter Id of your item"<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"the price of item wiht ID : "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main() {
    FAST_IO;
    Shop dukaan;
    dukaan.initCounter();
    dukaan.getPrice();
    dukaan.getPrice();
    dukaan.displayPrice();

    return 0;
}
//by ad73prem