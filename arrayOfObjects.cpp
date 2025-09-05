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
    int id;
    int salary;

    public:
        void setId(void){
            salary=122;
            cout<<"enter id of employee : "<<endl;
            cin>>id;
        }

        void getId(){
            cout<<"the id of this employee is : "<<id<<endl;
        }
};

int main() {
    FAST_IO;
    // Employee harry, rohan, lovish , shruti;
    // harry.setId();
    // harry.getId();

    Employee fb[4]; //this is how we can make arrays of objects... its kind of like mkaing a custom datatype only... indexing can be used ot acces a certain object inside the array of objects
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}
//by ad73prem