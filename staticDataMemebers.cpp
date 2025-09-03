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
    static int count;  //ny default the vlaue will be zero
    int id;

    public:
        void setData(void){
            cout<<"Enter employee id : "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the employee id is: "<<endl;
            cout<<id<<endl;
            cout<<"this is employee number: "<<count<<endl;
        }

        static void getCount(void){ //static functions are made to access and use the static data members
            cout<<"the value of ocount is : "<<count<<endl;
        }
};

int Employee:: count;

int main() {
    FAST_IO;
    Employee harry, rohan, lavish;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    harry.getData();
    Employee::getCount();
    
    lavish.setData();
    lavish.getData();
    Employee::getCount();

    return 0;
}
//by ad73prem