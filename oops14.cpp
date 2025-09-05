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

//Dynamic initialization of Objects using Constructors
//depending upon the use rinput we will choose which constructor to use

class bankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        bankDeposit(){};
        bankDeposit(int p, int y, float r);//can be a value like 0.04 or even 4%
        bankDeposit(int p , int y, int r);

        void show();
};

bankDeposit :: bankDeposit(int p, int y, float r){ //this is for if hte user gives the interest rate in flaot like 0.04
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue= returnValue* (1+r);
    }
}

bankDeposit :: bankDeposit(int p, int y, int r){ //this is for when the user gives the interest rate in intereger in percentage like 4%
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue= returnValue* (1+interestRate);
    }
}

void bankDeposit :: show(){
    cout << "Principal amount: " << principal << endl;
    cout << "Number of years: " << years << endl;
    cout << "Interest rate: " << interestRate << endl;
    cout << "Return value: " << returnValue << endl;
}

int main() {
    FAST_IO;
    bankDeposit bd1, bd2, bd3; //the constructor with no arguements is must for this line to execute. as this declaration will call that constructor only.
    int p, y;
    float r;
    int R;

    cout<<"enter the values : "<<endl;
    cin>>p>>y>>R;
    bd1= bankDeposit(p,y,R);  //basically the cpp compiler is smart enough to understand that if the arguement is passed as int it will clal the int constructor and if its float it will call the float constructor
    bd1.show();
    return 0;
}
//by ad73prem